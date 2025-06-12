#include<stdio.h>
int main(){
    int num,large,small;
    int arr[3];
    for(int i=0;i<=2;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d %d %d \n",arr[0],arr[1],arr[2]);
    for(int i=0;i<=2;i++){
        if(arr[i]<35){
            printf("%d",i);
        }
        else printf("");
    }
   
}