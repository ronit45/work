#include<stdio.h>
int main(){
int n = 3;
for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
        if(j<=i){
            printf("* ");
        }
    }
printf("\n");
}
return 0;
}