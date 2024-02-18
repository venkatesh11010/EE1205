#include <stdio.h>
#include<math.h>

double y_0() {
    double t = 0;  // calculating y(t) at 0+
    return (1 + exp(-t / 5)) * (t >= 0);
}

double Y_infinity() {
    double s = 100;  // calculating y(t) at 0+
    return (1.0 / s) + (1.0 / (s + (1.0 / 5.0)));
}

int main() {
    FILE *fp;
    fp = fopen("data5.dat", "w");

    for (double t = 0.1; t <= 100.0; t += 0.1) {
        double y_t = 1 + exp(-t/5);
        double Y_s = (1.0 / t) + (1.0 / (t + (1.0 / 5.0)));
        fprintf(fp, "%.2f %.4f %.4f\n", t, y_t,Y_s);
    }

    fclose(fp);

    double limit_y = y_0();
    double limit_Y = Y_infinity();
    return 0;
}

