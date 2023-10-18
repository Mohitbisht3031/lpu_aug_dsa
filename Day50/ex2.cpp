#include<bits/stdc++.h>
using namespace std;

class BSTnode{
    public:
    int val;
    BSTnode*left;
    BSTnode*right;
    // int h;
    BSTnode(int val) : val(val),left(NULL),right(NULL){}
};

//brute force
void in(BSTnode*root,vector<int>&v){
    if(!root)return;
    in(root->left,v);
    v.push_back(root->val);
    in(root->right,v);
    return;
}

vector<int> correctBST(BSTnode*root){
    vector<int>v;
    in(root,v);
    vector<int>v2 = v;
    sort(v2.begin(),v2.end());
    vector<int>ans;
    for(int i = 0;i<v.size();i++){
        if(v[i] != v2[i])ans.push_back(v[i]);
    }
    return ans;
}

// optimised
void in(BSTnode*root,BSTnode*&prev,BSTnode*&f,BSTnode*&s){
    if(!root)return;
    in(root->left,prev,f,s);
    if(prev && prev->val > root->val){
        if(!f)f = prev;
        s = root;
    }
    prev = root;
    in(root->right,pre,f,s);
}

vector<int> correctBST(BSTnode*root){
    if(!root)return {};
    BSTnode*prev = NULL,*f = NULL, *s = NULL;

    in(root,prev,f,s);
    if(f && s)return {f->val,s->val};
    return {};
}
int main(){
    return 0;
}
