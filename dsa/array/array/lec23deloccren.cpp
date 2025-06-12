#include<iostream>
#include<string>
using namespace std;
string deloccurence(string word,string part){
    while(word.length()!=0 && word.find(part)<word.length()){
        word.erase(word.find(part),part.length());
    }
return word;
}
int main(){
    string word="dababcaabac";
    cout<<deloccurence(word,"abc");
    string s1= "abc";
    string s2 = "abbaca";
    cout<<"\n"<<s2.find('a');
    s2.erase(0,1);
    cout<<"\n"<<s2.find('a');

}