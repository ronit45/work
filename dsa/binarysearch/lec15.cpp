#include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool possible(int arr[], int n,int m,int mid){
int sum=0,s=0;
int student=1;
for(int i=0;i<n;i++){
    if(sum<=mid){
    sum=sum+arr[i];
    }
    else{
        student++;
        if(student>=m ||arr[i]>mid){
            return false;
        }
        sum =sum+ arr[i];
    }
}
return true ;
}
int main(){
    int arr[4]={5,11,17,100};
    int n=4,s=0,e=0,ans=-1,m=4;
    for(int i=0;i<n;i++){
        e=e+arr[i];
    }
    cout<<e<<"\n";
    int mid;
    while(s<=e){
        mid=s+(e-s)/2;
        if(possible(arr,n,m,mid)){
            ans =mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
cout<<ans;
return 0;
}