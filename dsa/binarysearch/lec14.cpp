#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int s=0,e=n-1,mid;
    while(s<e){
        mid=s+(e-s)/2;
        if(arr[mid]>=arr[0]){
            s=mid + 1;
        }
        else{
            e=mid;
        }
    }
return s;
}
int binary(int arr[],int s,int e,int k){
    int start=s;
    int end=e;
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
    int arr[6]={7,9,1,2,3};
    int k,e=arr[5];
    int pivotp=pivot(arr,6);
    if(arr[pivotp]>=k>=e){
       cout<< binary(arr,pivotp,5,3);
    }
    else{
        cout<< binary(arr,0,pivotp-1,3);
    }
}