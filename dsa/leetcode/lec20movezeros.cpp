#include<iostream>
#include<algorithm>
using namespace std;
void movezeros(int arr[], int n){
    int nonzero = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[nonzero]);
            nonzero++;
        }
    }
}
int main(){
    int arr[6]={0,1,0,3,12,0};
    movezeros(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i];
    }
}