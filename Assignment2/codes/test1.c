#include<stdio.h>

// Function to calculate x(n) = (9 - 5n)u(n)
int x_n2(int n) {
    return (9 - 5 * n) * (n >= 0);
}

int x_n1(int n) {
    return (3 + 4 * n) * (n >= 0);
}

int main() {
    int sum1=0;
    int sum2=0;

    FILE *file = fopen("data.dat", "w");
    if (file == NULL) {
        printf("Error opening file!");
        return 1;
    }

    // Generate values for n
    for (int n = -5; n <= 14; ++n) {
        // Calculate corresponding values for x(n)
        int x_value1 = x_n1(n);
        int x_value2 = x_n2(n);

        //calculating sums
        sum1 += x_value1;
        sum2 += x_value2;

        // Write values to the file
        fprintf(file, "%d %d %d\n", n, x_value1,x_value2);
    }

    fclose(file);

    printf("%d %d",sum1,sum2);
    return 0;
}
