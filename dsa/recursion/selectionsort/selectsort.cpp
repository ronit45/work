#include<iostream>
using namespace std;
void print(int arr[]){
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selection(int* arr,int i,int j,int n){
    print(arr);
    cout<<i<<j<<endl;
    if(j==n){
        i++;
        j=i+1;
        return selection(arr,i,j,n);
    }
    if(i==n-1 || j==n+1){
        return;
    }

    if(arr[i]>arr[j]){
        swap(arr[i],arr[j]);
        j++;
        return selection(arr,i,j,n);
    }
    else{
        j++;
    return selection(arr,i,j,n);
    }
}
int main(){
    int arr[5]={45,7,6,4,33};
    selection(arr,0,1,5);
}