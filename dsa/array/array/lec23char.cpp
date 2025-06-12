#include<iostream>
using namespace std;
//lowercase elements
void lowercase(char arr[], int size){
    for(int i=0;i<size;i++){
        if('A'<=arr[i] && arr[i]<='Z'){
            arr[i]=arr[i] - 'A'+'a';
        }
    }

}
bool palindrome(char arr[], int size){
    lowercase(arr,size);
    int s=0,e=size-1;
    while(s<=e){
        if(arr[s]!=arr[e]){
            return 0;
            break;
        }
        else{
            s++,e--;
        }
    }
return 1;
}


int main(){
    char arr[4]={'N','O','o','n'};
    cout<<palindrome(arr,4)<<"\n";
    lowercase(arr,4);
    char temp='N'-'A'+'a';
    cout<<temp;
    for(int i=0;i<4;i++){
        cout<<arr[i];
    }
    return 0;
}