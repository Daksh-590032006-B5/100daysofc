//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include<stdio.h>
#include<math.h>

int main()
{
    int n, st, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    st = n;
    while(n != 0)
    {
        temp = n % 10;
        sum = sum+pow(temp, 3);
        n = n / 10;
    }
    if(st == sum)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not Armstrong\n");
    }
    return 0;
}