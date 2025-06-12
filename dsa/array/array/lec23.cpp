#include<iostream>
#include<string>
using namespace std;
string removespaces(string &arr){
    string temp="";
    for(int i=0;i<arr.length();i++){
        if(arr[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{ 
            temp.push_back(arr[i]);
        }
    }
return temp;
}
int main(){
    string word="My name is banner";
    cout<<removespaces(word);
return 0;
}