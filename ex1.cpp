#include<bits/stdc++.h>
using namespace std;

bool helper(vector<int>&nums,int i,int s){
    if(s == 0)return 1;
    if(i >= nums.size())return 0;

    if(nums[i] > s){
        return helper(nums,i+1,s); // go on next index and try to make the subset
    }

    int ans1 = helper(nums,i+1,s-nums[i]);
    int ans2 = helper(nums,i+1,s);

    return ans1 || ans2;
}

bool equalSubsetSum(vector<int>&nums){
    int s = accumulate(nums.begin(),nums.end(),0);
    if(s%2)return 0;

    s/=2;
    return helper(nums,0,s);
}


int main(){ 
    return 0;
}
