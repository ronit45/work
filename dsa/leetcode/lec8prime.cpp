#include<iostream>
using namespace std;
int prime(int n){
    int ans;
for(int i=0;i<=n;i++){
    if(n%i==0) ans= 0;
    else ans= 1;
}
return ans;
}
int main(){
int n=5;
int ans = prime(n);
}