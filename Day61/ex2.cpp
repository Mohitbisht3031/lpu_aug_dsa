#include<bits/stdc++.h>
using namespace std;

// brute force recursive approach O(3^n)
int noOfWays(int n){
    if(n < 0 )return 0;
    if(n == 0)return 1;
    return noOfWays(n-1)+noOfWays(n-2)+noOfWays(n-3);
}

// memoization || top down dp
int dfs(int n,vector<int>&dp){
    if(n < 0)return 0;
    if(n==0)return 1;
    if(dp[n] != -1)return dp[n];
    return dp[n] = dfs(n-1,dp)+dfs(n-2,dp)+dfs(n-3,dp);
}

int noOfWays(int n){
    vector<int>dp(n+1,-1);
    return dfs(n,dp);
}

// tabular || bottom up dp
int noOfWays(int n){
    vector<int>dp(n+1);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3;i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
    }
    return dp[n];
}

int main(){
    return 0;
}
