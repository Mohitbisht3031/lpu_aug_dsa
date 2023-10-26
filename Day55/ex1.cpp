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

bool dfs(vector<vector<char>>&g,int i,int j,int k,string&word,vector<vector<int>>&vis){
    if(i < 0 || i >= g.size() || j < 0 || j >= g[0].size() || vis[i][j] || g[i][j] != word[k])return 0;

    vis[i][j] = 1;

    int dx[] = {0,0,1,-1};
    int dy[] = {1,-1,0,0};
    for(int x = 0;x<4;x++){
        int nx = i+dx[x];
        int ny = i+dy[x];
        if(dfs(g,nx,ny,k+1,word,vis))return 1;
    }

    // if(dfs(g,i-1,j,k+1,word,vis))return 1;
    // if(dfs(g,i+1,j,k+1,word,vis))return 1;
    // if(dfs(g,i,j-1,k+1,word,vis))return 1;
    // if(dfs(g,i,j+1,k+1,word,vis))return 1;

    vis[i][j] = 0;

    return 0;
}

bool haveWords(vector<vector<char>>&g,string word){
    vector<vector<int>>vis(g.size(),vector<int>(g[0].size(),0));
    for(int i = 0;i<g.size();i++){
        for(int j = 0;j<g[0].size();j++){
            if(g[i][j] == word[0]){
                if(dfs(g,i,j,0,word,vis))return 1;
            }
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
