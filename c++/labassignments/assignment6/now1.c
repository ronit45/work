#include<stdio.h>
int subtract(int x,int y);
int main(){
    int arr[12];
    for(int i=0;i<12;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<12;i++){
        printf("%d,",arr[i]);
    }
    printf("\n");

    int mat1[3][4];
    int a=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<4 ;j++ ){
            
            mat1[i][j]=arr[a];
            a++;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4 ;j++ ){
            printf("%d,",mat1[i][j]);
        }
    printf("\n");
    }
    printf("\n");
    int mat2[3][4];
    int b=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<4 ;j++ ){
            
            mat2[i][j]=arr[b];
            b++;
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<4 ;j++ ){
        if(mat2[i][j]>50){
           mat2[i][j]=50;
        }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4 ;j++ ){
            printf("%d,",mat2[i][j]);
        }
    printf("\n");
    }
    printf("\n");
    int mat3[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4 ;j++ ){
        mat3[i][j]=subtract(mat1[i][j],mat2[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4 ;j++ ){
            printf("%d,",mat3[i][j]);
        }
    printf("\n");
    }
    printf("\n");



    int c=0;
    int mat4[4][3];
    for(int i=0;i<4;i++){
        for(int j=0;j<3 ;j++ ){
            
            mat4[i][j]=arr[c];
            c++;
        }
    printf("\n");
    }
    printf("\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<3 ;j++ ){
            printf("%d,",mat1[j][i]);
        }
    printf("\n");
    }
    printf("\n");

   for(int i=0;i<3;i++){
        for(int j=0;j<4 ;j++ ){
            printf("%d,",mat1[i][j]);
        }
    printf("\n");
    }  
}
int subtract(int x,int y){
    int a =x-y;
return a;
}