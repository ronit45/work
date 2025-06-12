#include<stdio.h>
void fun(int x[]);
int main(){
    int arr[3]={1,2,3};
    fun(arr);
    printf("%d",arr[0]);
return 0;}
void fun(int x[]){
x[0]=0;
}