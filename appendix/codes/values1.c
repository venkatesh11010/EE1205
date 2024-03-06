#include <stdio.h>
#include<math.h>
#include <float.h>
#define PI 3.14

double h_db1(double w) {
    double w_0 = 2000;
    double p1 = -1000;
    double p2 = -2000;
    return (20 * log10(pow(w_0, 2)) - 20 * log10(sqrt(pow(w, 2) + pow(p1, 2))) -20 * log10(sqrt(pow(w, 2) + pow(p2, 2))) )* (w >= 0) ;
}

double h_db2(double w) {
    double w_0 = 2000;
    double p = -1500;
    return (20 * log10(pow(w_0, 2)) - 20 * log10(pow(w, 2) + pow(p, 2)) )* (w >= 0) ;
}

double h_db3(double w) {
    double w_0 = 2000;
    double w_d = 1950;
    double sigma = 50;
    return (20 * log10(pow(w_0, 2)) - 20 * log10(sqrt(pow((-pow(w, 2) + pow(w_d, 2) + pow(sigma, 2)), 2) + pow((2 * sigma * w), 2))) )* (w >= 0) ;
}

int main() {
    FILE *fp;
    fp = fopen("data_2.dat", "w");

    for (double w = 0; w <= 3000; w += 10) {
        fprintf(fp, "%e %e %e %e\n", w, h_db1(w), h_db2(w), h_db3(w));
    }

    fclose(fp);

    return 0;
}

