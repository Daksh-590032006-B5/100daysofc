/*Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

int main() {
    int number, i, factorial, sum = 0;
    int temp;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;
    while (temp != 0) {
        factorial = 1;
        for (i = 1; i <= temp % 10; i++) {
            factorial *= i;
        }
        sum += factorial;
        temp /= 10;
    }

    if (sum == number) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}