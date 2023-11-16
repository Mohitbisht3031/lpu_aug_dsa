#include<bits/stdc++.h>
using namespace std;

int dfs(string&a,string&b,int i,int j){
    if(i >= a.size() || j >= b.size())return 0;

    if(a[i] == b[j]){
        return dfs(a,b,i+1,j+1)+1;
    }

    int a1 = dfs(a,b,i+1,j);
    int a2 = dfs(a,b,i,j+1);
    int a3 = dfs(a,b,i+1,j+1);

    return max({a1,a2,a3});
}

int LCS(string a,string b){
    return dfs(a,b,0,0);
}

int main(){
    return 0;
}
