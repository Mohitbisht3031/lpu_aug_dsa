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

bool dfs(vector<vector<int>>&g,int src,vector<int>&vis,int p){
    vis[src] =1;

    for(int nbr : g[src]){
        if(nbr != p && vis[nbr])return 1;
        else if(!vis[nbr]){
            if(dfs(g,nbr,vis,src))return 1;
        }
    }

    return 0;
}

bool haveCycle(vector<vector<int>>&g){
    vector<int>vis(g.size(),0);
    for(int i = 0;i<vis.size();i++){
        if(!vis[i]){
            if(dfs(g,i,vis,-1))return 1;
        }
    }
    return 0;
}

int main(){
    // vector<vector<int>>g = make_matrix();
    vector<vector<int>>g = make_list();
    // print(g);
    return 0;
}
