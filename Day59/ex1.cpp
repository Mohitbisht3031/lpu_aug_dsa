#include<bits/stdc++.h>
using namespace std;

class BSTnode{
    public:
    int v;
    BSTnode*left;
    BSTnode*right;
    BSTnode(int v) : v(v),left(NULL),right(NULL){}
};

void dfs1(BSTnode*root,int&mf,int&c,int&prev){
    if(!root)return;
    dfs(root->left,mf,c,prev);
    if(prev == root->v)c++;
    else c = 1;
    mf = max(mf,c);
    prev = root->V;
    dfs(root->right,mf,c,prev);
    return ;
}

void dfs2(BSTnode*root,int&mf,int&c,int&prev,vector<int>&v){
    if(!root)return;
    dfs2(root->left,mf,c,prev,v);
    if(prev == root->v)c++;
    else c = 1;
    if(mf == c)v.push_back(root->v);
    prev = root->v;
    dfs2(root->right,mf,c,prev,v);
    return ;
}

vector<int> findMode(BSTnode*root){
    vector<int>v;
    int mf,c,prev;
    dfs1(root,mf=0,c=0,prev=-1);
    dfs2(root,mf=0,c=0,prev=-1,v);
    return v;
}

int main(){
    return 0;
}
