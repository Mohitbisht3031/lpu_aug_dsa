#include<bits/stdc++.h>
using namespace std;

class BSTnode{
    public:
    int val;
    BSTnode*left;
    BSTnode*right;
    BSTnode(int val) : val(val) , left(NULL) , right(NULL){}
};

bool helper(BSTnode*root,int lb,int ub){
    if(!root)return 1;
    if(root->val < lb || root->val > ub)return 0;
    bool lans = helper(root->left,lb,root->val);
    bool rans = helper(root->right,root->val,ub);
    return lans&&rans;
}

bool validBST(BSTnode*root){
    if(!root)return 1;
    return helper(root,INT_MIN,INT_MAX);
}

int main(){
    return 0;
}
