#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("data5.dat", "w");

    for (double s = 0.1; s <= 10.0; s += 0.1) {
        double Y_s = (10 * s + 1) / (s * (5 * s + 1));
        fprintf(fp, "%.2f %.4f\n", s, Y_s);
    }

    fclose(fp);
    return 0;
}

