#include<iostream>
using namespace std;
void merge(int *arr,int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first = new int[len1];
    int *second= new int[len2];
    int mainarrayindex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainarrayindex++];
    }
    mainarrayindex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainarrayindex++];
    }
    //merge 2 sorted array;
    int index1=0;
    int index2=0;
    mainarrayindex=s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainarrayindex++]=first[index1++];
        }
        else{
            arr[mainarrayindex++]=second[index2++];
        }
    }
    while(index1<len1){
        arr[mainarrayindex++]=first[index1++];
    }
    while(index2<len2){
        arr[mainarrayindex++]=second[index2++];
    }
    delete []first;
    delete []second;
}
void mergesort(int *arr,int s, int e){
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(s>=e){
        return;
    }
    int mid= s+(e-s)/2;

    //left part sort
    mergesort(arr,s,mid);
    //rigth part sort
    mergesort(arr,mid+1,e);
    //merge
    cout<<s<<e<<endl;
    merge(arr,s,e);
}
int main(){
    int arr[7]={9,8,6,5,4,3,2};
    mergesort(arr,0,6);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}