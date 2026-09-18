//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include<stdio.h>
int main()
{
    int n, reverse = 0,temp=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n != 0)
    {
        temp = n % 10;
        reverse = reverse * 10 + temp;
        n = n / 10;
    }
    printf("Reverse of the number is: %d\n", reverse);
    return 0;
}