#include<iostream>
#include<algorithm>
using namespace std;

void selection(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j])
           swap(arr[j],arr[i]); 
        }
        
    }
}
int main(){
    int arr[6]={1,45,59,34,76,6};
    selection(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    
return 0;}