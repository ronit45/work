#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        vector<int> arr(n);
        int zeros =0;
        int xore = 0;
        int opcnt = 0;
        for(int i=1; i<=n; i++){
            cin>>arr[i];
            xore = xore^arr[i];
            if(arr[i] == 0 && i>1){
                if(xore == 0) opcnt++;
                else opcnt += 2;
                xore = 0;
            }
            if(i == n && arr[i] != 0){
                if(xore == 0) opcnt++;
                else opcnt += 2;
            }   
        }
        
        if(opcnt == 0) cout<<2<<endl;
        else cout<<opcnt<<endl;
        
        // int start = 1;
        // for(int i=1; i<=n; i++){
        //     if(arr[i] == 0){
        //         if(xore == 0){
        //             cout<<start<<" ";
        //             cout<<i-1<<endl;
        //             start = i+1;
        //         }
        //         else{
        //             cout<<start<<" ";
        //             cout<<i-1<<endl;
        //             cout<<start<<" ";
        //             cout<<i-1<<endl;
        //             start = i+1;
        //             xore = 0;
        //         }
        //     }
        //     xore = xore^arr[i];
        // }
       
        t--;
    }
}