#include<stdio.h>
#include "polydef.h"
int main(){
    polyterm *p1,*p2,*p3;
    printf("Enter polynomial 1 :");
    p1 = create_polynomial();
    printf("\n%p",p1);
    printf("Enter polynomial 2 :");
    p2 = create_polynomial();
    printf("\n%p",p2);
    printf("First polynomial is :");
    display_polynomial(p1);
    // printf("Second polynomial is :");
    // display_polynomial(p2);
    //p3 =addpolynomial(p1,p2);
   // printf("Addition two polynomail is :");
   //derivative(p1);
   //checksparse(p1);
   //display_polynomial(p1);
   valueatx(p1,2);

    display_polynomial(p1);
    

}