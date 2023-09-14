#include<bits/stdc++.h>
using namespace std;

// brute force
bool find(vector<int>&v,int n){
    for(int e:v){
        if(e == n)return 1;
    }
    return 0;
}
int numOfPoints(vector<vector<int>>&nums){
    vector<int>v;
    for(int i= 0;i<nums.size();i++){
        for(int i = nums[i][0];i<=nums[i][1];i++){
            if(!find(v,i))v.push_back(i);
        }
    }
    return v.size();
}

// optimized

int numOfPoints(vector<vector<int>>&nums){
    unordered_map<int,int>v;
    for(int i= 0;i<nums.size();i++){
        for(int i = nums[i][0];i<=nums[i][1];i++){
            v[i]++;
        }
    }
    return v.size();
}

int main(){ 

    return 0;
}
