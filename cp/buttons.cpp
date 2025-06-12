#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        int sum =0;
        int neg =0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i] <0) neg++;
            sum += arr[i];
        }
        int x=0;
        if(sum < 0){
            x = -1*floor(sum/2.0);
        }
        neg = neg - x;
        if(neg %2 !=0){
            x = x+1;
        }
        cout<<x<<endl;
        
        
    }
}