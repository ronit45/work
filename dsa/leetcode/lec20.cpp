#include<iostream>
#include<algorithm>
using namespace std;
void reverse(int arr[], int m){
    int s=m+1,e=4;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++,e--;
    }
}
int main(){
    int arr[5]={1,3,4,5,5};
    reverse(arr,1);
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}