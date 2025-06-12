#include<stdio.h>
int main(){
    int r=5,c=2;
    
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(i==1||i==r||j==1||j==c){
                printf(" *");
            }
            else{
                printf("  ");
            }

        }
    printf("\n");
    }
}