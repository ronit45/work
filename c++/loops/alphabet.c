#include<stdio.h>
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        int a = 65;
        for(int i=1;i<=n;i++){
            char ch = (char)a;
            printf("%c ",ch);
            a++;
        }
    printf("\n");
    }
return 0;
}