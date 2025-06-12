#include<iostream>
using namespace std;
int mountain(int arr[],int n){
    int s=0,e=n-1,mid=s+(e-s)/2;;
    while(s<e){
        
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else if(arr[mid]>arr[mid+1]){
            e=mid; 
        }
        mid=s+(e-s)/2;
    }
return s;
}
int main(){
    int arr[6]={1,2,5,6,3,0};
    cout<<mountain(arr,6);
}