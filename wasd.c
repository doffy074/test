#include <stdio.h>

int main() {
    int rows, i, j, space;

    // Prompt user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for (i = 1; i <= rows; i++) {
        // Print spaces for centering
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print stars (*), increasing by one per row
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}   