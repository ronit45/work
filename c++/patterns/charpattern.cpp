#include<iostream>
using namespace std;
int main(){
    int n= 3;
    int count = 0;
    for(int i=1;i<=n;i++){
        for(char j=1;j<=n;j++){
            cout<<char(65+count);
            count++;
        }
    cout<<"\n";
    }
}