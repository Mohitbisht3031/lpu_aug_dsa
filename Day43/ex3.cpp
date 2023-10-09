#include<bits/stdc++.h>
using namespace std;

class BSTnode{
    public:
    int val;
    BSTnode*left;
    BSTnode*right;
    BSTnode(int val) : val(val) , left(NULL) , right(NULL){}
};

BSTnode* addNode(BSTnode*root,int v){
    if(!root){
        return new BSTnode(v);
    }
    if(root->val > v)root->left = addNode(root->left,v);
    else root->right = addNode(root->right,v);
    return root;
}

// DLR
void preOrder(BSTnode*root){
    if(!root)return ;
    cout<<root->val<<" ";
    preOrder(root->left);
    preOrder(root->right);
    return ;
}

int main(){
    return 0;
}
