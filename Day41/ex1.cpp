#include<bits/stdc++.h>
using namespace std;

// bayers-moore voting algo.!! -> moore voting algo.!!
// TC: O(n) && SC:O(1)
int majority_ele(vector<int>&nums){
    int c = 0;
    int e = 0;
    for(int i = 0;i<nums.size();i++){
        if(c == 0){
            c++;
            e = nums[i];
        }else if(e == nums[i])c++;
        else c--;
    }

    c = 0;
    for(auto ele:nums){
        if(ele  == e)c++;
    }

    if(c > (nums.size()/2))return e;
    return -1;
}

int main(){

    return 0;
}
