#include <stdio.h>
#include<math.h>

double y_0() {
    double t = 0;  // calculating y(t) at 0+
    return (1 + exp(-t / 5)) * (t >= 0);
}

int main() {
    FILE *fp;
    fp = fopen("data5.dat", "w");
    double s = 100;
    double sY_s = 0.0;

    for (double t = 0.1; t <= 100.0; t += 0.1) {
        double y_t = 1 + exp(-t/5);
        sY_s += ((s)*(1 + exp(-t/5))*(exp(-s*t))*(0.1));
        fprintf(fp, "%.2f %.4f\n", t, y_t);
    }

    fclose(fp);

    double limit_y = y_0();
    
    return 0;
}

