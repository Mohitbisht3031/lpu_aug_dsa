#include<bits/stdc++.h>
using namespace std;

void helper(vector<int>&nums,int i,vector<int>&v,vector<vector<int>>&vec){
    if(i >= nums.size()){
       vec.push_back(v);
       return; 
    }

    v.push_back(nums[i]);
    helper(nums,i+1,v,vec);

    v.pop_back();
    helper(nums,i+1,v,vec);
    return ;
}

vector<vector<int>> subset(vector<int>&nums){
    if(nums.size() == 0)return {};
    vector<int>v;
    vector<vector<int>>vec;

    helper(nums,0,v,vec);
    
    return vec;
}


int main(){ 
    return 0;
}
