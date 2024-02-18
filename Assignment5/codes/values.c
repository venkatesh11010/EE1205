#include <stdio.h>
#include<math.h>

double calculate_limit() {
    double t = 0;  // calculating y(t) at 0+
    return (1 + exp(-t / 5)) * (t >= 0);
}

int main() {
    FILE *fp;
    fp = fopen("data5.dat", "w");

    for (double t = 0.1; t <= 10.0; t += 0.1) {
        double Y_t = 1 + exp(-t/5);
        fprintf(fp, "%.2f %.4f\n", t, Y_t);
    }

    fclose(fp);

    double limit_result = calculate_limit();
    
    return 0;
}

