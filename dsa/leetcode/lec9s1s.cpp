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
        while(i<j){
        swap(arr[i],arr[j]);
        i++,j--;
        }
        
    }

int main(){
    int arr[7]={0,0,0,1,1,0,1};
    sort(arr,7);
    printarr(arr,7);
}