#include <stdio.h>
#include<math.h>
#include <float.h>
#define PI 3.14

double angle1(double w) {
    double p1 = -1000;
    double p2 = -2000;
    return (atan(w / p1) + atan(w / p2)) * (w >= 0) ;
}

double angle2(double w) {
    double p = -1500;
    return 2 * atan(w / p) * (w >= 0) ;
}

double angle3(double w) {
    double w_d = 1950;
    double sigma = 50;
    return (-atan((w + w_d) / sigma) -atan((w - w_d) / sigma)) * (w >= 0) ;
}

int main() {
    FILE *fp;
    fp = fopen("data_2.dat", "w");

    for (double w = 0; w <= 3000; w += 10) {
        fprintf(fp, "%e %e %e %e\n", w, angle1(w), angle2(w), angle3(w));
    }

    fclose(fp);

    return 0;
}

