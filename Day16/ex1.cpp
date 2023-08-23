#include<bits/stdc++.h>
using namespace std;

// brute force approach TC: O(n^2)
int countPair(vector<int>&nums, int t){
    int c =0 ;
    for(int i = 0;i<nums.size();i++){
        for(int j = i+1;j<nums.size();j++){
            if(nums[i]+nums[j] < t)c++;
        }
    }
    return c;
}

// better approach TC:O(nlogn)
int countPair(vector<int>&nums, int t){
    sort(nums.begin(),nums.end());
    int i = 0;
    int c = 0;
    int j = nums.size()-1;
    while(i < j){
        if(nums[i]+nums[j] >= t){
            j--;
        }else {
            c+=(j-i);
            i++;
        }
    }
    return c;
}

int main(){

}
