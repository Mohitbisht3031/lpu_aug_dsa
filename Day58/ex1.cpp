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

void dfs(vector<vector<int>>&g,int src,vector<int>&in,vector<bool>&vis){
    vis[src] = 1;
    for(int nbr : g[src]){
        if(!vis[nbr]){
            in[nbr]++;
            dfs(g,nbr,in,vis);
        }
    }
    return;
}

int returnStartNode(vector<vector<int>>&g){
    vector<int>in(g.size(),0);
    vector<bool>vis(g.size(),0);
    dfs(g,0,in,vis);
    for(int i = 0;i<in.size();i++){
        if(in[i] == 0)return i;
    }
    return -1;
}

int main(){
    // vector<vector<int>>g = make_matrix();
    vector<vector<int>>g = make_list();
    // print(g);
    return 0;
}
