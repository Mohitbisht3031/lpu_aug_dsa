#include<bits/stdc++.h>
using namespace std;

// recursive code TC : O(2^n)
int fib(int n){
    if(n <= 1)return n;
    return fib(n-1)+fib(n-2);
}

// bottom up dp / tabular dp 
int fib(int n){
    if(n <= 1)return n;
    vector<int>dp(n,0);
    dp[1] = 1;
    for(int i = 2;i<n;i++){
        dp[i] = dp[i-1]+dp[i-2];
    }

    return dp[n-1];
}

//top down dp || memoization
int dfs(int n,vector<int>&dp){
    if(n <= 1)return n;
    if(dp[n] != -1)return dp[n];
    return dp[n] = fib(n-1)+fib(n-2);
}

int fib(int n){
    if(n <= 1)return n;
    vector<int>dp(n,-1);
    return dfs(n,dp);
}

int main(){
    return 0;
}
