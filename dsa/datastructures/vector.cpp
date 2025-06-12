#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<pair<int,int>> mpp;
    mpp.push_back({1,2});
    auto it = mpp.begin();
    cout<<it->second;
}