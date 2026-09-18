/*Q49: Write a program to print the following pattern:
5
45
345
2345
12345

/*
Sample Test Cases:
Input 1:

Output 1:
5
45
345
2345
12345

*/
#include <stdio.h>

int main() {
    int n = 5;
    int i, j, k;

    for(i = 0; i < n; i++) {
        //Print leading spaces (increases with each row)
        for(j = 0; j < i; j++) {
            printf(" ");
        }
        
        //Print stars (decreases with each row)
        for(k = 0; k < n - i; k++) {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}
