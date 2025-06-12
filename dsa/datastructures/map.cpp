#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, int> mpp1;
    map<pair<int, int>, int> mpp2;

    mpp1[1] = 2;
    mpp1.emplace(3, 1);
    mpp1.insert({2, 4});

    mpp2[{2, 3}] = 10;
    auto it = mpp1.lower_bound(2);
    cout<<it->first;

    cout << "Map with int as key:" << endl;
    for(auto it : mpp1){
        cout << it.first << " " << it.second << endl;
    }

    cout << "Map with pair<int, int> as key:" << endl;
    for(auto it : mpp2){
        cout << "(" << it.first.first << ", " << it.first.second << ") " << it.second << endl;
    }
    auto it = mpp1.begin();
    auto it2 = mpp2.end();
    
    auto it= mpp1.find(3);
    cout<<(it)->second;
    return 0;
}
