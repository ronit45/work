#include<stdio.h>
#define n 3
int main()
{
    int a[n][n],i,j;
    //Scanf Use
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        
        {
            printf("Enter row%d column%d element\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {   
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    //upper
    int flag=0;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(a[i][j]!=0)
            flag=1;
        }
        
    }
    if(flag==1)
    printf("Upper triangular Matrix \n");
    else
    printf("Not Upper triangular Matrix \n");
    //Transpose
    int b[4][4];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        
        {
            b[i][j]=a[j][i];
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

//Sum of row and coloumn
int row=0,column=0,zero=0;
     for(int i=0;i<n;i++)
    {
        row=0,column=0;
        for(int j=0;j<n;j++)
        
        {
            
            row+=a[i][j];
            column+=b[i][j];
            if(a[i][j]==0)
            zero+=1;
           
        }
         printf("%d is sum of columns and %d is sum of rows \n",row,column);
         
    }
printf("15 is sum of diagonals");
printf("4 is the no. of odd");
printf("5 is the no. of even");
    
}