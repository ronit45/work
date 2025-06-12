#include<iostream>
#include<string>
using namespace std;
void reverse(char arr[]){
    int length= sizeof(arr)/sizeof(char);
    
    int s=0,e=length-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++,e--;
    }

}
void sentrev(string sent){
    int length=sent.size();
    char arr[]={};
    for(int i=0;i<length;i++){
        if(sent[i]==' '){

        }
    }
}
int main(){
    string sent;
    sent="My name is babbar";
    cout<<sent[3];
    return 0;
}