#include<bits/stdc++.h>
using namespace std;

// brute force approach TC:O(n^2)
bool Twosum(vector<int>&nums,int t){
    for(int i=0;i<nums.size();i++){
        for(int j= i+1;j<nums.size();j++){
            if(nums[i]+nums[j] == t)return 1;
        }
    }
    return 0;
}

// optimized TC:O(nlogn)
bool Twosum(vector<int>&nums,int t){
    int i = 0;
    sort(nums.begin(),nums.end());
    int j = nums.size()-1;
    while(i < j){
        int s = nums[i]+nums[j];
        if(s == t){
            return 1;
        }else if(s < t){
            i++;
        }else j--;
    }
    return 0;
}

int main(){
    return 0;
}
