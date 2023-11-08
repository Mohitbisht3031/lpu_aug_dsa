#include<bits/stdc++.h>
using namespace std;

int numTrees(int n){
    vector<int>dp(n+1,0);
    dp[0] = dp[1] = 1;

    for(int i = 2;i<=n;i++){
        for(int j = 0;j<=n;j++){
            dp[i]+=(dp[j]*dp[n-j-1]);
        }    
    }

    return dp[n];
}

int main(){
    return 0;
}
