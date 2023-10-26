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

bool dfs(vector<vector<int>>&g,int src,int val,vector<int>&vis,vector<int>&t){
    vis[src] = 1;
    t[src] = val;
    for(int nbr : g[src]){
        if(!vis[nbr]){
            if(dfs(g,nbr,0-val,vis,t))return 1;
        }else if(t[nbr] != 0-val)return 0;
    }

    return 1;
}

bool bipatition(vector<vector<int>>&g){
    vector<int>vis(g.size(),0);
    vector<int>t(g.size(),0);
    return dfs(g,0,1,vis,t);
}

int main(){
    // vector<vector<int>>g = make_matrix();
    vector<vector<int>>g = make_list();
    // print(g);
    return 0;
}
