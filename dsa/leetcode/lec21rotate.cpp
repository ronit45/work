#include<iostream>
using namespace std;
void rotate(int arr[], int n,int m){
    for(int i=0;i<m;i++){
        int temp=arr[n-1];
        for(int j=n-2;j>=0;j--){
            arr[j+1]=arr[j];
        }
        arr[0]=temp;
    }
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    rotate(arr,7,4);
    for(int i=0;i<7;i++){
        cout<<arr[i];
    }
}