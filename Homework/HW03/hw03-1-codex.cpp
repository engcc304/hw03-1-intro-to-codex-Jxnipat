// Including necessary header files
#include <stdio.h>
#include <conio.h>

// Main function
int main() {
    // Variable declarations
    int a = 10;
    int b = 20, c = 30, d = 40;

    // Printing the initial message
    printf("This is\n %d + %d = %d ", a, b, a + b);

    // Loop to iterate through values
    for (int i = 0; i < d - 30; i++) {
        // Conditional check for i
        if (i < 30) {
            printf("Here\n");

            // Nested conditional check for i
            if (i == 8) {
                printf("This is 8.\n");
            }
        }
        
        // Printing "ok" at each iteration
        printf("ok\n");
    }

    // Returning 0 to indicate successful execution
    return 0;
}

