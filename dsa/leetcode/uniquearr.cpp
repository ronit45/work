#include<iostream>
using namespace std;
int answ(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    for(int i=1;i<n;i++){ 
        ans =ans^i;
    }
return ans;
}
void unique(int arr[],int n){
    bool duplicate;
   for(int i=0;i<n;i++){
    duplicate=false;
    for(int j=0;j<n;j++){
        if(i!=j && arr[i]==arr[j]){
            duplicate= true;
            break;
        }
    }
    if(!duplicate){
        cout<<arr[i]<<" ";
    }
   } 
}
int main(){
    int arr[5]={2,3,3,5,4};
    cout<<answ(arr,5);
    
}