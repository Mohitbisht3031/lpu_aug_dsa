#include<bits/stdc++.h>
using namespace std;

class BTnode{
    public:
    int val;
    BTnode*left;
    BTnode*right;
    BTnode(int val) : val(val) , left(NULL) , right(NULL){}
};

// not levelwise
BTnode* make(){
    // int n;
    // cin>>n;
    // if(n == -1)return NULL;
    // BTnode*root = new BTnode(n);
    // root->left = make();
    // root->right = make();
    // return root;
    int n;
cin >> n;
if(n==-1) return NULL;
BTnode* root=new BTnode(n);
root->left=make();
root->right=make();
return root;
}

// not level wise
void print(BTnode*root){
    if(!root)return ;
    cout<<root->val<<"-";
    if(root->left)cout<<root->left->val<<",";
    if(root->right)cout<<root->right->val;
    cout<<endl;
    print(root->left);
    print(root->right);
    return;
}

BTnode* make_level(){
    int n;
    cin>>n;
    if(n == -1)return NULL;
    queue<BTnode*>q;
    BTnode*root = new BTnode(n);
    q.push(root);
    while(!q.empty()){
        BTnode*f = q.front();
        q.pop();
        int lc = -1;
        int rc = -1;
        cout<<"enter "<<f->val<<" left and right child : ";
        cin>>lc>>rc;
        if(lc != -1){
            f->left = new BTnode(lc);
            q.push(f->left);
        }
        if(rc != -1){
            f->right = new BTnode(rc);
            q.push(f->right);
        }
    }
    return root;
}

// home work!!
void print_level(BTnode*root){

}

int main(){
    // BTnode*root = make();
    // print(root);
    BTnode*root = make_level();
    print_level(root);
    return 0;
}
