#include<iostream>
using namespace std;
void reverse(string& arr,int s,int e){
    cout<<arr;
    if(s>e)
    return;
    swap(arr[s],arr[e]);
    s++,e--;
    reverse(arr,s,e);
}
bool palindrome(string& arr,int s,int e){
    if(s>e)
    return true;
    if(arr[s]==arr[e]){
        return palindrome(arr,s+1,e-1);
    }
    else{
        return false;
    }
}
int main(){
    string arr="BookkooB";
    int e =arr.length()-1; 
    int s=0;
   // reverse(arr,0,5);
    cout<<palindrome(arr,s,e);
}