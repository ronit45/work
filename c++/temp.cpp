#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; 
    cin >> t;
    
    while (t--) {
       int n;cin>>n;
       vector<int> arr(n,0);
       int exor =0;
       int cnt =0;
       for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]==0) cnt =i;
        exor = exor^arr[i];
       }
       if(exor == 0) cout<<"0"<<endl;
       else{
        if(n%2 ==0){
       cout<<"2"<<endl;
       cout<<"1 "<<n<<endl;
       cout<<"1 "<<n<<endl;
        }
        else{
            cout<<"2"<<endl;
            if(cnt ==1) cout<<"2 "<<n<<endl;
            else if(cnt == n) cout<<"1 "<<n-1<<endl;
            else{
                cout<<"1 "<<cnt<<endl;
                cout<<cnt+2<<" "<<n<<endl;
            }
        }
       }


    }
return 0;
}
