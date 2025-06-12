#include<iostream>
using namespace std;
void print(int arr[],int s,int e){
    for(int i=s;i<e;i++){
        cout<<arr[i]<<" ";
    }
cout<<endl;
}
void bubble(int* arr,int i,int j,int n){
    print(arr,0,5);
    cout<<"     "<<i<<j<<endl;
    if(j==n-i){
        j=0;
        i++;
    }
    if(i==n){
        return;
    }
    if(arr[j+1]<arr[j]){
        swap(arr[j+1],arr[j]);
        j++;
        return bubble(arr,i,j,n);
    }
    else{
        j++;
        return bubble(arr,i,j,n);
    }
}
int main(){
    int arr[5]={2,4,6,5,1};
    bubble(arr,1,0,5);

}