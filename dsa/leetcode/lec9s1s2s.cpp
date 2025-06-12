#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void printarr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    cout<<"\n";
    
}
void sort(int arr[], int n){
    int i=0,j=n-1;
        while(arr[i]==0 && i<j){
            i++;
        }
        while(arr[j]==1 && i<j){
            j--;
        }
        while(arr[i]==1 && arr[j]==0&& i<j){
        swap(arr[i],arr[j]);
        i++,j--;
        }
        
    }
void sort2(int arr[], int n){
    int i=0,j=n-1;
        while(arr[i]==0 || arr[i]==1 && i<j){
            i++;
        }
        while(arr[j]==2 && i<j){
            j--;
        }
        while(arr[i]==2 && arr[j]==1&& i<j){
        swap(arr[i],arr[j]);
        i++,j--;
        }
        
    }
int main(){
    int arr[10]={0,1,0,1,2,2,1,1,2,0};
    sort(arr,10);
    printarr(arr,10);
    sort2(arr,10);
    printarr(arr,10);
}