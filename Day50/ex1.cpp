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

int kthSmallest(BSTnode*root,int&k){
    if(!root)return -1;
    int ans = kthSmallest(root->left,k);
    if(ans != -1)return ans;
    if(k == 1)return root->val;
    k--;
    return kthSmallest(root->right,k);
}

int main(){
    return 0;
}
