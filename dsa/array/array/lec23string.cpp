#include<iostream>
#include<string>
using namespace std;
bool validchar(char ch){
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' || ch>='0' && ch <='9'){
        return 1;
    }
return 0;
}
void lowercase(string &word){
    int length = word.size();
    char temp;
    for(int i=0;i<length;i++){
        temp=word[i];
        if(temp>='A' && temp<='Z'){
            word[i]=temp-'A'+'a';
        }
    }

}
bool palindrome(string words){
    lowercase(words);
    int length = words.size();
    string temp="";
    for(int i=0;i<length;i++){
        if(validchar(words[i])){
            temp.push_back(words[i]);
        }
    }
    cout<<"\n";
    int s=0,e=temp.size()-1;
    bool ans = true;
    while(s<=e){
        if(temp[s]!=temp[e]){
            ans =false;
            cout<<temp[s]<<temp[e];
            break;
        }
        else{
            s++,e--;
        }
    }
    
return true;
}
int main(){
    string word;
    word=" , ";
    //cout<<word.size();
    bool ans=palindrome(word);
    cout<<ans;
    return 0;
}