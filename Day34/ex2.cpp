#include<bits/stdc++.h>
using namespace std;

void helper(vector<int>&nums,int i,vector<int>&v,vector<vector<int>>&vec){
    if(i >= nums.size()){
        vec.push_back(v);
        return;
    }
    // include the current element
    v.push_back(nums[i]);
    // recursive call to make the further subset with the current element included
    helper(nums,i+1,v,vec);
    // not to uninclude this platform poping it out
    v.pop_back();
    // recursive call to make the further subset without the current element included 
    helper(nums,i+1,v,vec);
    return ;
}

vector<vector<int>>subsets(vector<int>&nums){
    if(nums.size() == 0)return {};
    vector<vector<int>>vec;
    vector<int>v;
    helper(nums,0,v,vec);
    return vec;
}

int main(){ 
    return 0;
}
