#include<bits/stdc++.h>
using namespace std;
class disjointset {
    vector<int> rank,parent,size;
public : 
    disjointset(int n){
        rank.resize(n+1,0);
        size.resize(n+1,1);
        parent.resize(n+1);
        for(int i=0; i<n; i++){
            parent[i] = i;
        }
    }

    int findUpar(int node){
        if(parent[node] == node) return node;
        
        return parent[node] = findUpar(parent[node]);
    }
    
    void unionByrank(int u,int v){
        int ulp_u = findUpar(u);
        int ulp_v = findUpar(v);
        if(ulp_u == ulp_v) return;
        if(rank[ulp_u] < rank[ulp_v]){
            parent[ulp_u] = ulp_v;
        }
        else if(rank[ulp_v] < rank[ulp_u]){
            parent[ulp_v] = ulp_u;
        }
        else{
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    void unionBysize(int u,int v){
        int ulp_u = findUpar(u);
        int ulp_v = findUpar(v);
        if(ulp_u == ulp_v) return;
        if(size[ulp_u] < size[ulp_v]){
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else{
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }

    }
};
int main(){
    disjointset ds(7);
    ds.unionBysize(1,2);
    ds.unionBysize(2,3);
    ds.unionBysize(4, 5);
    ds.unionBysize(6, 7);
    ds.unionBysize(5, 6);
    ds.unionBysize(3, 7);
    cout<<ds.findUpar(0);

}