#include<stdio.h>
#include<math.h>
int main() {
    int a,b,c;
    printf("Enter :");
    scanf("%d" , &a);
    printf("Enter :");
    scanf("%d", &b);
    printf("Enter :");
    scanf("%d", &c);

    float avg = (a + b + c)/3 ;
    printf("Average is : %f", avg);
}