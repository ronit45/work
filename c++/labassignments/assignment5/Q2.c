#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter");
    scanf("%d",&num);
    int power=0;
    while(pow(2,power)<=num){
        power++;
    }
    int ans =pow(2,power-1);
    int ans1=pow(2,power);
    if(num-ans>ans1-num){
        printf("Closest power of 2 to %d is 2^%d= %d\n",num,power ,ans1);
    }
    else{
        printf("Closest power of 2 to %d is 2^%d= %d\n",num,power-1 ,ans);
    }
    return 0;
}