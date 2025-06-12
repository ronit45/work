#include<stdio.h>
int main(){
int arr[3][3][3]={{},{},{}};
for(int i=0;i<=2;i++){
    printf("Enter values :");
    scanf("%d",&arr[0][0][i]);
}
for(int j=0;j<=2;j++){
    printf("Enter values :");
     scanf("%d",&arr[1][0][j]);
}
for(int j=0;j<=2;j++){
    printf("Enter values :");
     scanf("%d",&arr[2][0][j]);
}
for(int i=0;i<=2;i++){
    printf("%d",arr[0][0][i]);
}
printf("\n");
for(int j=0;j<=2;j++){
 printf("%d",arr[1][0][j]);
}
printf("\n");
for(int j=0;j<=2;j++){
 printf("%d",arr[2][0][j]);
}
int primesum = arr[0][0][0]+arr[1][0][1]+arr[2][0][2];
printf("%d\n",primesum);

int secsum = arr[0][0][2]+arr[1][0][1]+arr[2][0][0];
printf("%d\n",secsum);
int row1=0;
for(int i=0;i<=2;i++){
    int row1=row1 + arr[0][0][i];
}
printf("%d\n",row1);
int row2=0;
for(int i=0;i<=2;i++){
    int row2=row2 + arr[1][0][i];
}
printf("%d\n",row2);
int row3;
for(int i=0;i<=2;i++){
    int row3=row3 + arr[2][0][i];
}
printf("%d\n",row3);
int col1;
for(int i=0;i<=2;i++){
    int col1=col1 + arr[i][0][0];
}
printf("%d\n",col1);
int col2;
for(int i=0;i<=2;i++){
    int col2=col2 + arr[i][0][1];
}
printf("%d\n",col2);
int col3;
for(int i=0;i<=2;i++){
    int col3=col3 + arr[i][0][2];
}
printf("%d\n",col3);
}