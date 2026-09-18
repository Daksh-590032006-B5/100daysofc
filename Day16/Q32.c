//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include<stdio.h>
int main()
{
    int n, st, reverse = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    st = n;
    while(n != 0)
    {
        temp = n % 10; 
        reverse = reverse * 10 + temp;
        n = n / 10; 
    }
    if(st == reverse)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }
    return 0;
}