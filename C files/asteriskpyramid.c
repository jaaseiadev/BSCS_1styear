#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pyramid

        for (int i = 1; i <= rows; i++) {
        
      
        
        // Print asterisks for the pyramid
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        
        // Move to the next line
        printf("\n");
    }

    return 0;
}