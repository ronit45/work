#include<stdio.h>
#include<math.h>

int main(){


    int n1,n2;
    printf("Enter number of elements in arrays: ");
    scanf("%d%d",&n1,&n2);
    int a[11],b[11],c[11];
        for(int i=0;i<11;i++)
        {a[i]=0;
        c[i]=0;
        b[i]=0;
        }
    printf("Enter a: ");
    for(int i=11-n1;i<11;i++)
    scanf("%d",&a[i]);
    printf("Enter b: ");
    for(int i=11-n2;i<11;i++)
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