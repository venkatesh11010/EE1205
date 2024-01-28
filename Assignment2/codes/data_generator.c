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

    // Given values of the first AP
    int a1 = 3;  // first term
    int d1 = 4;  // common difference
    int n1 = 15; // number of terms

    // Generate the arithmetic progression
    int ap_sequence1[15];
    for (int i = 0; i < n1; i++) {
        ap_sequence1[i] = a1 + i * d1;
    }

    // Calculate the sum of the first 15 terms
    int sum_an1 = 0;
    for (int i = 0; i < n1; i++) {
        sum_an1 += ap_sequence1[i];
    }

    // Given values of the second AP
    int a2 = 9;   // first term
    int d2 = -5;  // common difference
    int n2 = 15;  // number of terms

    // Generate the arithmetic progression
    int ap_sequence2[15];
    for (int i = 0; i < n2; i++) {
        ap_sequence2[i] = a2 + i * d2;
    }

    // Calculate the sum of the first 15 terms
    int sum_an2 = 0;
    for (int i = 0; i < n2; i++) {
        sum_an2 += ap_sequence2[i];
    }
    return 0;
}
