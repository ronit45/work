#include<iostream>
using namespace std;
int squareroot(int n,int s, int e){
    int mid=s+(e-s)/2;
    cout<<mid<<endl;
    int square = mid*mid;
    if(s>e){
        return false;
    }
    if(square==n){
        return mid;
    }
    if(square<n){
        return squareroot(n,mid+1,e);
    }
    else{
        return squareroot(n,s,mid-1);
    }

}
int main(){
    cout<<squareroot(9,0,9);
}