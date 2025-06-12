#include<iostream>
using namespace std;
int pow(int n){
if(n==0){
    return 1;
}
return 2*pow(n-1);
}
int fib(int n){
    int num=0;
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans =fib(n-1)+fib(n-2);
    return ans;
}
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
void saydigit(int n,string arr[]){
    if(n==0){
        return;
    }
    int digit= n%10;
    n = n/10;
    
    saydigit(n,arr);
    cout<<arr[digit];
    
} 
int pow2(int n,int m){
    if(m==0){
        return 1;
    }
    return n*pow2(n,m-1);
}
int main(){
    int a=2;
    cout<<pow(5)<<endl;
    cout<<fact(4)<<endl;
    cout<<fib(4)<<endl;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    saydigit(412,arr);
    cout<<endl<<pow2(2,3);





}