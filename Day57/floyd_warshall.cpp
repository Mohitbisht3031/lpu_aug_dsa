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

// floyd warshall
vector<vector<int>> allNodeMinCost(vector<vector<int>>&g){
    vector<vector<int>> dis = g;
    for(int mid = 0;mid<g.size();mid++){
        for(int i = 0;i<g.size();i++){
            for(int j = 0;j<g[0].size();j++){
                if(i == mid || j == mid)continue;
                if(dis[i][j] > dis[i][mid] + dis[mid][j]){
                    dis[i][j] = dis[i][mid] + dis[mid][j];
                }
            }
        }
    }

    return dis;
}

int main(){
    // vector<vector<int>>g = make_matrix();
    vector<vector<int>>g = make_list();
    // print(g);
    return 0;
}
