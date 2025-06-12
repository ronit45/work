#include<stdio.h>
int main(){
    int sum=0;
    int arr[3]={20,30,40};
    for(int i=0;i<=2;i++){
        sum = sum+ arr[i];
    }
    printf("%d",sum);
}