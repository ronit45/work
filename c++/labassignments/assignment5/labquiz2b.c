#include <stdio.h>
#include <math.h>
int main() 
{
    int num, revN = 0, rd;

    printf("Enter number to be reversed : \n ");
    scanf("%d", &num);

    while (num != 0) 
    {
        rd = num % 10;
        revN = revN * 10 + rd;
        num /= 10;
    }

    printf("Reversed number: %d\n", revN);

    return 0;
}