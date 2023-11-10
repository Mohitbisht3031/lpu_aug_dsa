#include<bits/stdc++.h>
using namespace std;


void dfs(unordered_map<int,vector<int>>&g,int&s,unordered_map<int,int>&vis,vector<int>&ans){
    vis[s]++;
    ans.push_back(s);
    for(auto nbr:g[s]){
        if(vis.count(nbr) == 0){
            dfs(g,nbr,vis,ans);
        }
    }
    return ;
}

vector<int> restoreArray(vector<vector<int>>& ap) {
    unordered_map<int,vector<int>>mp;
    for(int i = 0;i<ap.size();i++){
        mp[ap[i][0]].push_back(ap[i][1]);
        mp[ap[i][1]].push_back(ap[i][0]);
    }
    int s = 0;
    for(auto m : mp){
        if(m.second.size() == 1){
            s = m.first;
            break;
        }
    }

    unordered_map<int,int>vis;
    vector<int>ans;
    dfs(mp,s,vis,ans);

    return ans;
}

int main(){
    return 0;
}
