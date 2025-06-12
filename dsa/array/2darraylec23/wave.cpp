#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector <int> ans;
    int j=0;
    for(int i=0;i<mCols;i++){
        
        while(j<nRows && j>=0)
            if(i&1){
                cout<<arr[nRows-1][i];
                ans.push_back(arr[i][j]);
                j--;
            }
            else{
                
                cout<<arr[i][j];
                ans.push_back(arr[i][j]);
                j++;
            }
        }
    return ans;
    }
int main(){
    vector<vector<int>> arr;
    wavePrint(arr,3,4);
    

}