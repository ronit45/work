#include<iostream>
#include<string>
using namespace std;
string change(string &a,int m){
int length = a.size()-m+1;
string n=to_string(a.size()-m+1);
string b = a;
a = a[0];
a = a + n;
a = a+b[length];
return a;
}
int main(){
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(j>=4){
                break;
            }
            cout<<j;
        }
    }
cout<<endl;
int arr[4]={0,0,0,0};
arr[3]++;
cout<<arr[3];
return 0;
}