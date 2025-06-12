#include<stdio.h>
int main(){
    int product=1;
    int arr[3]={20,30,40};
    for(int i=0;i<=2;i++){
        product =  product*arr[i];
    }
    printf("%d",product);

return 0;   
}