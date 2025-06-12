#include<iostream>
using namespace std;
int binary(int arr[],int n,int k){
    int start=0;
    int end=n-1;
    int mid ;
    while(start<=end){
        mid =start+ (end-start)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]<k){
            start= mid+1;
        }
        else if(arr[mid]>k){
            end = mid -1;
        }
        
    }
return -1;
}
int main(){
    int arr[5]={1,2,3,15,16};
    int mid= binary(arr,5,3);
    cout<<mid;

}