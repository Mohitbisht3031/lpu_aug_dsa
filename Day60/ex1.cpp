#include<bits/stdc++.h>
using namespace std;

class BTnode{
    public:
    int v;
    BTnode*left;
    BTnode*right;
    BTnode(int v) : v(v),left(NULL),right(NULL){}
};

pair<int,int> dfs(BTnode*root,int&c){
    if(!root)return {};
    pair<int,int>l = dfs(root->left,c);
    pair<int,int>r = dfs(root->right,c);
    int s = l.first+r.first+root->v;
    int co = l.second+r.second+1;
    if(s/co == root->v)c++;
    return {s,co+1};
}

int noNode(BTnode*root){
    if(!root)return 0;
    int c = 0;
    dfs(root,c);
    return c;
}

int main(){
    return 0;
}
