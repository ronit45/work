#include<stdio.h>
int main(){
    int a[11],b[11],c[11];
    for(int i=0;i<11;i++)
    {
        a[i]=0;
        b[i]=0;
        c[i]=0;
    }
   printf("Enter a element: ");

    for(int i=2;i<11;i++)
        scanf("%d",&a[i]);
            

        printf("Enter b element: ");
        for(int i=2;i<11;i++)
        scanf("%d",&b[i]);

        int carry=0;
        for(int i=10;i>=0;--i){
            c[i]=a[i]+b[i]+carry;
            carry=c[i]/10;
            c[i]=c[i]%10;
        }
        for(int i=0;i<11;i++)
        printf("%d",c[i]);
    
}