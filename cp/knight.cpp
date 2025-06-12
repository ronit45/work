#include<bits/stdc++.h>
using namespace std;


void fun(int king[],int knight[], map<pair<int,int>,int> &mpp){    
    for(int i=-1; i<2; i += 2){
        for(int j=-1; j<2; j+=2){
            int x = knight[0]*i + king[0];
            int y = knight[1]*j + king[1];
            mpp[{x,y}]++;
        }
    }
    if(knight[0] != knight[1]){
        swap(knight[0],knight[1]);
        for(int i=-1; i<2; i+=2){
            for(int j=-1; j<2; j+=2){
                int x = knight[0]*i + king[0];
                int y = knight[1]*j + king[1];
                mpp[{x,y}]++;
            }
    }
}
    

}
int main(){
    int t; cin>>t;
    while(t){
        int knight[2];
        //{1,2,-1,-2}
        cin>>knight[0];cin>>knight[1];


        int king[2];
        cin>>king[0];cin>>king[1];
        int queen[2];
        cin>>queen[0];cin>>queen[1];
        
        map<pair<int,int>,int> mpp;
        fun(king,knight,mpp);
        fun(queen,knight,mpp);

        int count=0;
        for(auto it : mpp){
            if(it.second == 2) count++;
        }
        cout<<count<<endl;
        t--;
    }

    

}