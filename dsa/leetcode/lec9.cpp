#include<iostream>
using namespace std;
int max(int arr[],int size){
    int maxi=INT_MIN;
    for(int i=0;i<size;i++){
        maxi=max(maxi,arr[i]);
        //if(arr[i]>max) {max= arr[i];}
    }
return maxi;
}
int min(int arr[], int n){
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        mini =min(mini,arr[i]);
        //if(arr[i]<min){ min = arr[i];};
    }
return mini;
}
int main(){
    int arr[]={2,3,4,51,5,-9};
    cout<<max(arr,6);
    cout<<min(arr,6);

}