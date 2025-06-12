#include<iostream>
using namespace std;
void intersection(int arr[],int n,int ar[],int m){
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr[i]==ar[j]){
            cout<<arr[i];
        }
    }
}
}
void sort(int arr,int n){
    
}
int main(){
    int arr[4]={1,2,4,3};
    int ar[4]={1,2,3,4};
    intersection(arr,4,ar, 4);

}