#include<iostream>
using namespace std;
void print(int arr[],int s,int e){
    for(int i=s;i<e;i++){
        cout<<arr[i]<<" ";
    }
cout<<endl;
}
int binarysright(int *arr,int s,int e,int k){
if(s>e){
    return false;
}
int mid=s+(e-s)/2,ans;
if(arr[mid]==k){
    ans = mid;
    int temp = binarysright(arr,mid+1,e,k);
    if(temp!=false){
        ans=temp;
    }
    return ans;
}
if(arr[mid]<k){
    return binarysright(arr,mid+1,e,k);
}
else{
    return binarysright(arr,s,mid-1,k);
}
}
int binarysleft(int *arr,int s,int e,int k){
    if(s>e){
        return false;
    }
    int mid = s + (e-s)/2,ans;
    if(arr[mid]==k){
        ans=mid;
        int temp=binarysleft(arr,s,mid-1,k);
        if(temp!=false){
            ans =temp;
        }
        return ans;
    }
    if(arr[mid]<k){
        return binarysleft(arr,mid+1,e,k);
    }
    else{
        return binarysleft(arr,s,mid-1,k);
    }
}
int totaloccurence(int* arr,int s, int e, int k){
    int ans = binarysright(arr,s,e,k)-binarysleft(arr,s,e,k)+1;
    return ans;
}
int main(){
    int arr[5]={1,1,2,2,2};
    cout<<binarysright(arr,0,5,2)<<endl;
    cout<<binarysleft(arr,0,5,2)<<endl;
    cout<<totaloccurence(arr,0,5,2)<<endl;

}