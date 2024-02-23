#include <stdio.h>
#include <math.h>

double generate_y(double t, double a) {
    return (1 - 2 * exp(-a * t));
}

double generate_phase(double w) {
    return -2 * atan(2 * 3.14 * pow(10, w) / 10000.00);
}

int main() {
    FILE *file1 = fopen("data6_1.dat", "w");

    if (file1 == NULL) {
        fprintf(stderr, "Error opening file.\n");
        return 1;
    }

    double a = 0.01;
    for (double t = 0; t <= 200; t += 10) {
        fprintf(file1, "%.4f %.4f\n", t, generate_y(t, a));
    }

    fclose(file1);

    FILE *file2 = fopen("data6_2.dat", "w");

    if (file2 == NULL) {
        fprintf(stderr, "Error opening file.\n");
        return 1;
    }

    for(double w=0 ; w<=6 ; w+=0.01) {
        fprintf(file2, "%.4f %.4f\n",  w, generate_phase(w));
    }

    fclose(file2);

    return 0;
}

