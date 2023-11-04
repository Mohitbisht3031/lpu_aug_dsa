#include<bits/stdc++.h>
using namespace std;

//recursive apporach
int balancedBT(int h){
    if(h <= 1)return h;
    int mod = 1e9+7;
    int t1 = balancedBT(h-1);
    int t2 = balancedBT(h-2);
    int a1 = (t1*t1)%mod;
    int a2 = 2*(t1*t2)%mod;
    return a1+a2;
}

// bottom up | tabular
int balancedBT(int h){
    if(h <= 1)return h;
    int mod = 1e9+7;
    vector<int>dp(h+1,0);
    dp[1] = 1;
    for(int i=2;i<=h;i++){
        int t1 = dp[i-1];
        int t2 = dp[h-2];
        int a1 = (t1*t1)%mod;
        int a2 = 2*(t1*t2)%mod;
        dp[i] = (a1+a2)%mod;
    }
    return dp[h];
}

int main(){
    return 0;
}
