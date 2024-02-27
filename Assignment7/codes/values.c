#include <stdio.h>
#include<math.h>
#include <float.h>

double y_of_jw(float w) {
    return (0.001 * sqrt(100 + pow(w, 2))) / (w * sqrt(4 * pow(w, 2) + 1) * sqrt(0.0001 * pow(w, 2) + 1) * sqrt(pow(w, 2) + 0.01));
}

int main() {
    FILE *fp;
    fp = fopen("data7.dat", "w");
    
    for (double w = 0.1; w <= 10.0; w += 0.1) {
        fprintf(fp, "%e %e\n", w, y_of_jw(w));
    }

    fclose(fp);

    return 0;
}

