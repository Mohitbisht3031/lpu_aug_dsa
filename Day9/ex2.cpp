#include<bits/stdc++.h>
using namespace std;

// 1.base case 
// 2. recursive call
// 3. small cal.
// recursive code;

// iterative approach
// binary search -> O(log(n)); n -> nums.size();
bool targetPresent(vector<int>&nums,int t){
    int lo = 0;
    int hi = nums.size()-1;
    while(lo <= hi ){
        int mid = lo + (hi-lo)/2;
        if(nums[mid] == t)return 1;
        else if(nums[mid] > t)hi = mid-1;
        else lo = mid+1;
    }
    return 0;
}

// iterative approach
// linear search
bool targetPresent(vector<int>&nums,int t){
    for(int i = 0;i<nums.size();i++){
        if(nums[i] == t)return 1;
        if(nums[i] > t)break;
    }
    return 0;
}

int main(){
    return 0;
}
