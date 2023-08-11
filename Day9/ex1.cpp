#include<bits/stdc++.h>
using namespace std;

// 1.base case 
// 2. recursive call
// 3. small cal.
// recursive code;
bool helper(vector<int>&nums,int t,int i){
    if(i >= nums.size() || nums[i] == t){
        return (i >= nums.size() ? 0 : nums[i] == t);
    }

    return helper(nums,t,i+1);
}

bool targetPresent(vector<int>&nums,int t){
    // for(int i = 0;i<nums.size();i++){
    //     if(nums[i] == t)return 1;
    // }
    // return 0;
    return helper(nums,t,0);
}

int main(){
    return 0;
}
