#include<iostream>
using namespace std;
int posleft(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid,ans;
    while(s<e){
        mid=s+(e-s)/2;
        if(arr[mid]==k){
            ans = mid;
            e=mid-1;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        else if (arr[mid]>k){
            e=mid-1;
        }
    }
return ans;
}
int posright(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid,ans;
    while(s<e){
        mid=s+(e-s)/2;
        if(arr[mid]==k){
            ans = mid;
            s=mid+1;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        else if (arr[mid]>k){
            e=mid-1;
        }
    }
return ans;
}
int main(){
    int arr[8]={0,1,1,1,2,2,33,33};
    cout<<posleft(arr,8,1);
    cout<<posright(arr,8,1);
}