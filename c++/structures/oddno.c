#include<stdio.h>
int main(){
    int x = 4;
    for(int i=0;i<=x-1;i++){
        int a = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", a);
            a = a+2;
        }
    printf("\n");
    }
}