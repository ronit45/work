#include<iostream>
using namespace std;
int main(){
    int n=4;
    int count =1;
    for(int i=1;i<=n;i++){
    
        for(int i=1;i<=count;i++){
            cout<<"*";
        }
        for(int i=1;i<=n-count;i++){
            cout<<" ";
        }
        cout<<"\n";
        count++;
        
    }
}