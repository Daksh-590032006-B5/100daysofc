/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>

int main() {
    int i, j;

    // 1. Upper part of the diamond (Rows 1 to 4)
    // Stars: 1, 3, 5, 7 | Spaces: 3, 2, 1, 0
    for (i = 1; i <= 7; i += 2) {
        // Print leading spaces
        for (j = 1; j <= (7 - i) / 2; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // 2. Lower part of the diamond (Rows 5 to 7)
    // Stars: 5, 3, 1 | Spaces: 1, 2, 3
    for (i = 5; i >= 1; i -= 2) {
        // Print leading spaces
        for (j = 1; j <= (7 - i) / 2; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
