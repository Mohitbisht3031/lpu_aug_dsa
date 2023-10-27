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

// Dijkstra's algo
int minCost(vector<vector<pair<int,int>>>&g,int v1,int v2){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push({0,v1});

    vector<int>vis(g.size(),0);
    vector<int>dis(g.size(),INT_MAX);
    dis[v1] = 0;
    vis[v1] = 1;
    while(!pq.empty()){
        auto f = pq.top();
        pq.pop();
        for(auto nbr:g[f.second]){
            if(!vis[nbr.first]){
                int d = dis[f.second] + nbr.second;
                if(d < dis[nbr.first]){
                    dis[nbr.first] = d;
                }
                pq.push({dis[nbr.first],nbr.first});
                vis[nbr.first] = 1;
            }
        }
    }

    return dis[v2];
}

int main(){
    // vector<vector<int>>g = make_matrix();
    vector<vector<int>>g = make_list();
    // print(g);
    return 0;
}
