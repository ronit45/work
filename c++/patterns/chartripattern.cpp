#include<iostream>
using namespace std;
int main(){
    int n =4;
    int count=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=i){
                cout<<char(65+count);
                count++;
            }  
        }
    cout<<"\n";
    }
}