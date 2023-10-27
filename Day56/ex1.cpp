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

int rottenApple(vector<vector<int>>&g,int x,int y){
    queue<pair<int,int>>q;
    q.push({x,y});
    g[x][y] = 0;
    int c =0;
    int dx[] = {0,0,-1,1};
    int dy[] = {1,-1,0,0};
    while(!q.empty()){
        int s = q.size();
        for(int i = 0 ;i<s;i++){
            pair<int,int>f = q.front();
            q.pop();
            for(int k = 0;k<4;k++){
                int nx = f.first+dx[k];
                int ny = f.second+dy[k];
                if(nx < 0 || nx >= g.size() || ny < 0 || ny >= g[0].size() || g[nx][ny] == 0)continue;
                q.push({nx,ny});
                g[nx][ny] = 0;
            }
        }
        c++;
    }
    return c;
}

int main(){
    // vector<vector<int>>g = make_matrix();
    vector<vector<int>>g = make_list();
    // print(g);
    return 0;
}
