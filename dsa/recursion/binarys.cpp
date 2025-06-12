#include<iostream>
using namespace std;
bool issorted(int arr[],int size){
    if(size == 0|| size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainpart= issorted((arr+1),size -1);
        return remainpart;
    }
}
int getsum(int arr[],int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int sum=0;
    int total= arr[0] + getsum((arr+1),size-1);
    return total;
}
bool linearsearch(int arr[],int size,int n){
    bool ans=false;
    if(size==0){
        return false;
    }
    if(arr[0]==n){
        return true;
    }
    else{
        ans = linearsearch((arr+1),size-1,n);
    return ans;
    }
    
}
bool binarys(int* arr,int s,int e,int k){
    int mid=s+(e-s)/2;
    if(s>e){
        return false;
    }
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]<k){
        return binarys(arr,s=mid+1,e,k);
    }
    else{
        return binarys(arr,s,e=mid-1,k);
    }
}
int main(){
    int arr[5]={1,2,3,6,4,};
    cout<<issorted(arr,5)<<endl;
    cout<<getsum(arr,5)<<endl;
    cout<<linearsearch(arr,5,9)<<endl;
    cout<<binarys( arr,0,4,222);

}