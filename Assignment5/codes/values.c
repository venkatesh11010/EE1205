#include <stdio.h>
#include<math.h>
#include <float.h>

double y_t(float t) {
    return (1 + exp(-t / 5)) * (t >= 0);
}

double fn_sY_s(float t , double s, double *sY_s) {
    for (double t = 0.1; t <= 100.0; t += 0.1) {
        *sY_s += ((s)*(y_t(t))*(exp(-s*t))*(0.1));
    }
    return *sY_s;
}

int main() {
    FILE *fp;
    fp = fopen("data5.dat", "w");
    float t = 0.1 ;
    double s = DBL_MAX;
    double sY_s = 0.0;

    for (double t = 0.1; t <= 100.0; t += 0.1) {
        fprintf(fp, "%e %e\n", t, y_t(t));
    }

    fclose(fp);

    float t_i = 0;
    printf("%e , %.4f \n",y_t(t_i),fn_sY_s(t,s,&sY_s));

    return 0;
}

