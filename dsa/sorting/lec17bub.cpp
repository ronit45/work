#include<iostream>
using namespace std;
void bubble(int arr[], int n){

    for(int i=1;i<n;i++){
        //till n-1 ith index
        bool swapped= false;
        for(int j=0;j<n-i;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
                swapped= true;
            }
        }
    if(swapped==false){
        
    }
    }
}
int main(){
    int arr[10]={-1,-5,0,3,2,4};
    bubble(arr,5);  
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }

}