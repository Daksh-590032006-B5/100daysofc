/*Q51: Write a program to print the following pattern:
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


    for (i = 5; i >= 1; i--) {
        //Print leading spaces (decreases as we go down)
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        
      //Print numbers starting from i up to n
        for (k = i; k <= n; k++) {
            printf("%d", k);
        }
    
        printf("\n");
    }

    return 0;
}
