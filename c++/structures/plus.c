#include<stdio.h>
int main(){
    int n =6;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(j==n/2 || i==n/2){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
    printf("\n");
    }
}