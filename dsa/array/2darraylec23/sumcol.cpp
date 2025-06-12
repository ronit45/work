#include<iostream>
using namespace std;
void sum(int arr[][4],int row, int col){
int max=0,rowindex;

    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        if(sum>max){
            max=sum;
            rowindex=row;
        }
    }
    cout<<rowindex;
}
int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    sum(arr,3,4);
}