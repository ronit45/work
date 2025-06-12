#include<iostream>
using namespace std;
bool check(int arr[], int n){
    int count=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            count++;
        }
    }
    if(arr[n-1]>arr[0]){
        count++;
    }
return count<=1;
}
int main(){
    int arr[5]={1,1,1,1,1};
    cout<< check(arr,5);
}