#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define n 5
//a
struct poly{
    int coeff;
    int exp;
};
typedef struct poly polyterm;
polyterm *create_polynomial(){
    polyterm *polynomial = (polyterm *)malloc(sizeof(polyterm)*n);
    for(int i=0;i<n;i++){
        scanf("%d", &polynomial[i].coeff);
        scanf("%d",&polynomial[i].exp);
    }
    return (polynomial);
};
void display_polynomial(polyterm *polynomial){
    for(int i=0;i<n;i++){
        if(i<n-1)
        printf("(%d)x^%d+",polynomial[i].coeff,polynomial[i].exp);
        else
        printf("%d",polynomial[i].coeff);
    }
    printf("\n");
}

polyterm *addpolynomial(polyterm *polynomial1,polyterm *polynomial2){
    static polyterm polynomial3[n];
    for(int i=0;i<=n;i++){
        if(polynomial1[i].exp==polynomial2[i].exp){
            polynomial3[i].coeff=polynomial1[i].coeff+polynomial2[i].coeff;
            polynomial3[i].exp=polynomial1[i].exp;
        }
    }
    return(polynomial3);
}
void valueatx(polyterm *polynomial1,int x){
    int sum=0;
    for(int i=0;i<n;i++){
        sum = sum + (polynomial1[i].coeff)*pow(x,polynomial1[i].exp);
    }
    printf("%d\n",sum);
}
polyterm *derivative(polyterm *polynomial1){
    static polyterm polynomial3[n];
    for(int i=0;i<n;i++){
        if(polynomial1[i].exp==1){
            polynomial1[i].coeff=0;
            
        }
        polynomial1[i].coeff= polynomial1[i].coeff*polynomial1[i].exp;
        polynomial1[i].exp = polynomial1[i].exp -1;
    }
return polynomial1;
}
void checksparse(polyterm *polynomial1){
    int count=0;
    for(int i=0;i<n;i++){
        if(polynomial1[i].coeff==0){
            count++;
        }
        }
if(count<2){
printf("\nnot sparse");
}
else{
printf("\nit is sparse");
}
}
