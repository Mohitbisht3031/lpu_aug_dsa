#include<bits/stdc++.h>
using namespace std;

class AVLnode{
    public:
    int val;
    AVLnode*left;
    AVLnode*right;
    int h;
    AVLnode(int val,int h) : val(val),h(h),left(NULL),right(NULL){}
};

int height(AVLnode*root){
    if(!root)return 0;
    return root->h;
}

int BF(AVLnode*root){
    if(!root)return 0;
    return height(root->left) - height(root->right);
}

AVLnode*LeftR(AVLnode*root){
    AVLnode*r = root->right;
    AVLnode*rl = r->left;
    r->left = root;
    root->right = rl;
    root->h = max(height(root->left),height(root->right))+1;
    r->h = max(height(r->left),height(r->left))+1;

    return r;
}

AVLnode*RightR(AVLnode*root){
    AVLnode*l = root->left;
    AVLnode*lr = l->right;
    l->right = root;
    root->left = lr;
    root->h = max(height(root->left),height(root->right))+1;
    l->h = max(height(l->left),height(l->left))+1;

    return l;
}

AVLnode* insert(AVLnode*root,int val){
    if(!root){
        return new AVLnode(val,1);
    }

    if(val < root->val){
        root->left = insert(root->left,val);
    }else if(val > root->val){
        root->right = insert(root->right,val);
    }else return root;

    root->h = max(height(root->left),height(root->right))+1;
    int bf = BF(root);

    if(bf < -1 && val > root->right->val){
        return LeftR(root);
    }
    if(bf > 1 && val < root->left->val){
        return RightR(root);
    }
    if(bf < -1 && val < root->right->val){
        root->right = RightR(root->right);
        return LeftR(root);
    }

    if(bf > 1 && val > root->left->val){
        root->left = LeftR(root->left);
        return RightR(root);
    }

    return root;
}

bool search(AVLnode*root,int val){
    if(!root)return 0;
    if(root->val == val)return 1;
    if(root->val > val)return search(root->left,val);
    return search(root->right,val);
}

// HW
AVLnode*Delete(AVLnode*root,int val){

}

int main(){
    return 0;
}
