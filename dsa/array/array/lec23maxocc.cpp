#include<iostream>
#include<string>
using namespace std;
char maxoccurence(string word){
    int l=word.length();
    
    int number[26]={0};
    for(int i=0;i<l;i++){
        char ch=word[i];
        int num=0;
        num=ch-'a';
        number[num]++;
    }
    int max=-1,ans=0;
    for(int i=0;i<26;i++){
        if(max<number[i]){
            ans=i;
            max=number[i];
        }
    }
char finalans= ans + 'a';
return finalans;
}
int main(){
    string word="Rot";
    char s=65;
    cout<<maxoccurence(word);
}