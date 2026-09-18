/*Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main() {
    int number, f, l, n2;
    int temp;

    printf("Enter a number: ");
    scanf("%d", &number);

    l = number % 10;
    temp = number;
    while (temp >= 10) {
        temp /= 10;
    }
    f = temp;

    n2 = l;
    temp = number / 10;
    while (temp >= 10) {
        n2 *= 10;
        temp /= 10;
    }
    n2 += f;

    printf("Swapped number: %d\n", n2);

    return 0;
}