#include<bits/stdc++.h>
using namespace std;
class  disjointset {
    vector<int> rank,parent;
public : 
    disjointset(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i=0; i<n; i++){
            parent[i] = i;
        }
    }

    int FindUPar(int node){
        if(node == parent[node])
            return node;

        return parent[node] = FindUPar(parent[node]);
    }

    void unionbyrank(int u,int v){
        int ulp_u = FindUPar(u);
        int ulp_v = FindUPar(v);
        if(ulp_u == ulp_v) return;
        if(rank[ulp_u] < rank[ulp_v]){
            parent[ulp_u] = ulp_v;
        }
        else if(rank[ulp_u] > rank[ulp_v]){
            parent[ulp_v] = ulp_u;
        }
        else{
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
};

int main(){
    disjointset ds(7);
    ds.unionbyrank(1,2);
    ds.unionbyrank(2,3);
    ds.unionbyrank(4, 5);
    ds.unionbyrank(6, 7);
    ds.unionbyrank(5, 6);
    if (ds.FindUPar(3) == ds.FindUPar(7)) {
        cout << "Same\n";
    }
    else cout << "Not same\n";


    ds.unionbyrank(3, 7);

    if (ds.FindUPar(3) == ds.FindUPar(7)) {
        cout << "Same\n";
    }
    else cout << "Not same\n";
    return 0;

}