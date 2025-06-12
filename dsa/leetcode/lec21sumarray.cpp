#include<iostream>
#include<vector>
using namespace std;
vector <int> findsum(vector <int> arr,int n,vector <int> arr2, int m){
    int carry=0;
    vector<int> ans;
    int i=n-1,j=m-1,sum=0;
    while(i>=0 && j>=0){
        sum=arr[i]+arr2[j] + carry;
        carry =sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--,j--;
    }
     while(i>=0){
        sum=arr[i] + carry;
        carry =sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
     while(j>=0){
        sum=arr2[j] + carry;
        carry =sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }
     while(carry!=0){
        sum=carry;
        carry =sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }
return ans;
}
int main(){
    vector <int> arr;
    for (int i = 1; i <= 5; i++)
    {
        arr.push_back(i);
     }
    vector <int> arr2;
    for (int i = 6; i <= 9; i++)
    {
        arr2.push_back(i);
     }
     
    vector<int> result = findsum(arr, 5, arr2, 4);
    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }
    return 0;
}