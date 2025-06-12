#include<stdio.h>
int countodd(int x[],int n);
int main(){
    int arr[4]={2,3,7,8};
    printf("%d", countodd(arr,4));
}
int countodd(int x[],int n){
    int count=0;
for(int i=0;i<=4;i++)
if(x[i]%2==1){
count++;
}
return count;}