#include<iostream>
#include<algorithm>
using namespace std;
void merge(int arr1[],int n, int arr2[],int m,int arr3[] ){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }
    while(i<n){//remaing elements of arr1
        arr3[k++]=arr1[i++];
    }
    while(j<n){//remaining elements of arr2
        arr3[k++]=arr2[j++];
    }
}
int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};
    int arr3[8]={0};
    merge(arr1,5,arr2,3,arr3);
    for(int i=0;i<8;i++){
        cout<<arr3[i];
    }
}