#include<iostream>
#include<vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
        if(nums.size()==1){
            return ;
        }
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]!=0){
                    cout<<i<<j<<endl;  
                    swap(nums[i],nums[j]);
                    break;
                }
                              
            }
        }
           
    }
    
}
int main(){
vector<int>nums;
nums.push_back(INT_MIN);
 for (int i = 0; i < nums.size(); i++) {
        if(nums[i]!=9){
    nums.push_back(9);
}}
for (int i = 0; i < nums.size(); i++) {
    cout<<nums[i]<<" ";
}

}