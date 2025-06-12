#include<stdio.h>
int fun(int arr[]){

}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    fun(arr);
}
int fun(int arr[]){
    for(int i=1;i<=10;i+2){
        return arr[i]*2;
    }
}