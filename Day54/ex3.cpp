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

vector<int> shortestPath(vector<vector<int>>&g,int v1,int v2){
    vector<int>vis(g.size(),0);
    queue<pair<int,vector<int>>>q;
    q.push({v1,{v1}});
    vis[v1] = 1;
    while(!q.empty()){
        pair<int,vector<int>>f = q.front();
        q.pop();
        if(f.first == v2)return f.second;

        for(int nbr : g[f.first]){
            if(!vis[nbr]){
                vector<int>v = f.second;
                v.push_back(nbr);
                vis[nbr] = 1;
                q.push({nbr,v});
            }
        }
    }

    return {};
}

int main(){
    // vector<vector<int>>g = make_matrix();
    vector<vector<int>>g = make_list();
    // print(g);
    return 0;
}
