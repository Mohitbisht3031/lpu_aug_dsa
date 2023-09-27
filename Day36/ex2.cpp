#include<bits/stdc++.h>
using namespace std;

void helper(vector<int>&nums,int i,vector<int>&v,vector<vector<int>>&vec,int t){
    if(t == 0){
        vec.push_back(v);
        return;
    }
    if(i >= nums.size())return ;

    if(nums[i] > t){
        helper(nums,i+1,v,vec,t);
        return;
    }

    v.push_back(nums[i]);
    helper(nums,i,v,vec,t-nums[i]);

    v.pop_back();
    helper(nums,i+1,v,vec,t);
    return;
}

vector<vector<int>> combinationSum(vector<int>&nums,int t){
    vector<int>v;
    vector<vector<int>>vec;
    helper(nums,0,v,vec,t);
    return vec;
}


int main(){ 
    return 0;
}
