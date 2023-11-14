#include<bits/stdc++.h>
using namespace std;

// recursive
int dfs(vector<vector<int>>&mat,int i,int j){
    if(i >= mat.size() && j >= mat[0].size())return 9999;
    if(i == mat.size()-1 && j == mat[0].size()-1)return mat[i][j];
    int a = dfs(mat,i+1,j);
    int b = dfs(mat,i,j+1);
    int c = dfs(mat,i+1,j+1);

    return min({a,b,c})+mat[i][j];
}

int minCost(vector<vector<int>>&mat){
    return dfs(mat,0,0);
}


// memoization
int dfs(vector<vector<int>>&mat,int i,int j,vector<vector<int>>&dp){
    if(i >= mat.size() && j >= mat[0].size())return 9999;
    if(i == mat.size()-1 && j == mat[0].size()-1)return mat[i][j];
    
    if(dp[i][j]!= -1)return dp[i][j];
    
    int a = dfs(mat,i+1,j,dp);
    int b = dfs(mat,i,j+1,dp);
    int c = dfs(mat,i+1,j+1,dp);

    return dp[i][j] = min({a,b,c})+mat[i][j];
}

int minCost(vector<vector<int>>&mat){
    vector<vector<int>>dp(mat.size(),vector<int>(mat[0].size(),-1));
    return dfs(mat,0,0,dp);
}

int main(){
    return 0;
}
