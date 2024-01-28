#include<stdio.h>

// Function to calculate x(n) = (9 - 5n)u(n)
int x_n2(int n) {
    return (9 - 5 * n) * (n >= 0);
}

int main() {
    FILE *file = fopen("data.dat", "w");
    if (file == NULL) {
        printf("Error opening file!");
        return 1;
    }

    // Generate values for n
    for (int n = -10; n <= 10; ++n) {
        // Calculate corresponding values for x(n)
        int x_value = x_n2(n);
        // Write values to the file
        fprintf(file, "%d %d\n", n, x_value);
    }

    fclose(file);
    return 0;
}
