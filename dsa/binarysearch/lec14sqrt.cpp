#include<iostream>
#include<math.h>
using namespace std;

long long int binary(int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+ (end-start)/2;
        long long int square= mid*mid;
        if(square==n){
            return mid;
        }
        else if(square<n){
            start= mid+1;
        }
        else if(square>n){
            end = mid -1;
        }
        
    }
    return -1;
}
double binary1(int n,int precision,int tempsol){
    double factor=1;
    double ans = tempsol;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
        ans =j;
    }
    }
    
return ans;
}
int main(){
    int n=37;
    int tempsol= binary(n);
    cout<<binary1(n,3,tempsol);
    return 0;
}
