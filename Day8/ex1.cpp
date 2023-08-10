#include<bits/stdc++.h>
using namespace std;

int longestSubarray(int nums[],int n,int th){
    int ans = 0;
    for(int i = 0;i<n;i++){
        if(nums[i]%2 ==0 && nums[i] <= th){
            int l = 1;
            int r = 0;
            for(int j = i+1;j<n;j++){
                if(nums[j] %2 != r && nums[j] <= th){
                    l++;
                    r = nums[j]%2;
                }else break;
            }
            ans = max(ans,l);
        }
    }

    return ans;
}

int main(){
    return 0;
}
