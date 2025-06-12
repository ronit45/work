#include<stdio.h>
#include<math.h>
void calc(float num,float *res){
    int count,n=1,sign =1 ;
    for(count =1;(n <=10);count =count +2){
        *res =*res + sign*(pow(num,count)/factorial(count));
        n++;
        sign *= -1;
    }
}

int main(){
    int degree;
    float radian,result=0;
    printf("Enter value if x in degreesl\n");
    scanf("%d",&degree);

    radian = degree* (3.14159/180.0);//convert degree into radians
    calc(radian,&result);
    printf("Sin(%d) = %f\n",degree,result);
    return 0;
}