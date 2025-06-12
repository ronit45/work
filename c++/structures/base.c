#include<stdio.h>
int main(){
    int arr[]={30,40,50,20};
    int x= sizeof(arr)/4;
    printf("%d\n",x);
    for(int i=0;i<=x-1;i++){
        if(arr[i]<35){
            printf("%d",i);
        }
        else{

        }
    }
}
