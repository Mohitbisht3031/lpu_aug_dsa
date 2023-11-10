#include<bits/stdc++.h>
using namespace std;

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

int main(){
    return 0;
}
