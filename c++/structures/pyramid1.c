#include<stdio.h>
int main(){
    int x = 4;
    for(int i=1;i<=x;i++){

       
        for(int k=1;k<=x/2-i; k++){
            printf(" ");
        }
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
          printf("*", a);
            a = a+2;
        }
    printf("\n");
    }
}