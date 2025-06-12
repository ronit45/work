#include<stdio.h>
int main(){
    int num[]={5,67,2,-1,6};
    int a = sizeof(num);
    printf("%d\n",a);
    int max =num[0];
    int min =num[0];
    for(int i=0;i<=2;i++){
        if(max<num[i]){
            max=num[i];
        }
        else if(min>num[i]){
            min=num[i];
        }

    }
    printf("%d  %d",max,min);
return 0;
}