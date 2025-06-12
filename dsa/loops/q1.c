#include<stdio.h>
int main(){
    int n=12345;
    int sum =0;
    int product =1;
    while(n!=0){
        int digit = n%10;
        sum=sum+digit;
        product = product*digit;
        n = n/10;
    }
    printf("%d",product-sum);
       
}