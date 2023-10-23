#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> make_matrix(){
    int n,e;
    cout<<"Enter no. of node and edges in the graph :";
    cin>>n>>e;
    cout<<endl;
    vector<vector<int>>g(vector<vector<int>>(n,vector<int>(n,0)));
    for(int i = 0;i<e;i++){
        int a,b;
        cout<<"give nodes with direct edge";
        cin>>a,b;
        if(a < n && b < n){
            g[a][b] = 1;
            g[b][a] = 1;
        }
    }

    return g;
}

vector<vector<int>> make_list(){
    int n,e;
    cout<<"Enter no. of node and edges in the graph :";
    cin>>n>>e;
    cout<<endl;
    vector<vector<int>>g(n);
    for(int i = 0;i<e;i++){
        int a,b;
        cout<<"give nodes with direct edge";
        cin>>a,b;
        if(a < n && b < n){
            g[a].push_back(b);
            g[b].push_back(a);
        }
    }

    return g;
}

void dfs(vector<vector<int>>&g,int v1,int v2,vector<int>&vis,vector<int>&v){
    if(v1 == v2){
        v.push_back(v1);
        return ;
    }
    vis[v1] = 1;
    for(int nbrs : g[v1]){
        if(!vis[nbrs]){
            dfs(g,nbrs,v2,vis,v);
        }
        if(v.size() > 0){
            v.push_back(v1);
            break;;
        }
    }
    return;
}

vector<int> path(vector<int>&g,int v1,int v2){
    vector<int>vis(g.size(),0);
    vector<int>v;
    dfs(g,v1,v2,vis,v);
    return v;
}

int main(){
    // vector<vector<int>>g = make_matrix();
    vector<vector<int>>g = make_list();
    // print(g);
    return 0;
}
