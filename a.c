#include <stdio.h>

int main() {
    int rows, i, j, k;

    // Prompt user for number of rows
    printf("Enter the number of rows: ");
    fflush(stdout);  // Ensure prompt is displayed
    
    if (scanf("%d", &rows) != 1) {
        printf("Error reading input! Using default value 5.\n");
        rows = 5;
    }

    // Outer loop for rows
    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print stars in current row
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        // Move to next line after each row
        printf("\n");
    }

    return 0;
}   