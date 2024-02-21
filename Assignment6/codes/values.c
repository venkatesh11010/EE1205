#include <stdio.h>
#include <math.h>

double generate_y(double t, double a) {
    return (1 - 2 * exp(-a * t));
}

int main() {
    FILE *file = fopen("data6.dat", "w");

    if (file == NULL) {
        fprintf(stderr, "Error opening file.\n");
        return 1;
    }

    double a = 0.01;
    for (double t = 0; t <= 200; t += 10) {
        fprintf(file, "%.4f %.4f\n", t, generate_y(t, a));
    }

    fclose(file);

    return 0;
}

