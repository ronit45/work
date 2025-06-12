#include<stdio.h>
#include<string.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<9;i++){
        for(int j=i+1;j<=9;j++){
            if(arr[i]>arr[j]){
                int a = arr[i];
                arr[i]= arr[j];
                arr[j]= a;
            }
        }
    }
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
}