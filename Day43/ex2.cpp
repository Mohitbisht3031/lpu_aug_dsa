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
    if(!root)return;
    queue<BTnode*>q;
    q.push(root);
    while(!q.empty()){
        BTnode* f = q.front();
        q.pop();
        cout<<f->val<<"-";
        if(f->left){
            cout<<f->left->val<<",";
            q.push(f->left);
        }
        if(f->right){
            cout<<f->right->val;
            q.push(f->right);
        }
        cout<<endl;
    }
    return;
}

// iterative
// int height(BTnode*root){
//     if(!root)return 0;
//     queue<BTnode*>q;
//     q.push(root);
//     int c = 0;
//     while(!q.empty()){
//         int s = q.size();
//         for(int i =0 ;i<s;i++){
//             BTnode*f = q.front();
//             q.pop();
//             if(f->left)q.push(f->left);
//             if(f->right)q.push(f->right);
//         }
//         c++;
//     }
//     return c;
// }

// recursion
int height(BTnode*root){
    if(!root)return 0;
    int lh = height(root->left);
    int rh = height(root->right);

    return max(lh,rh)+1;    
}

BTnode* maxSumNode(BTnode*root){
    if(!root)return NULL;
    queue<BTnode*>q;
    q.push(root);
    int s = 0;
    BTnode*node = NULL;
    while(!q.empty()){
        BTnode*f = q.front();
        q.pop();
        int sum = f->val;
        if(f->left){
            sum+=f->left->val;
            q.push(f->left);
        }
        if(f->right){
            sum+=f->right->val;
            q.push(f->right);
        }
        if(sum >= s){
            s = sum;
            node = f;
        }
    }
    return node;
}

void helper(BTnode*root,int&s,BTnode*&node){
    if(!root)return;
    int sum = root->val+(root->left ? root->left->val : 0) +(root->right ? root->right->val : 0); 

    if(sum >= s){
        sum = s;
        node = root;
    }
    helper(root->left,s,node);
    helper(root->right,s,node);
    return;
}

BTnode* maxSumNode(BTnode*root){
    if(!root)return NULL;
    BTnode*node = NULL;
    int s = 0;
    helper(root,s,node);
    return node;
}

BTnode* replace_node(BTnode*root){
    if(!root)return root;
    queue<BTnode*>q;
    q.push(root);
    int h = 1;
    while(!q.empty()){
        int s = q.size();
        for(int i = 0;i<s;i++){
            BTnode*f = q.front();
            q.pop();
            f->val = h;
            if(f->left)q.push(f->left);
            if(f->right)q.push(f->right);
        }
        h++;
    }
    return root;
}

// recursive approach!!
BTnode* dfs(BTnode*root,int h){
    if(!root)return root;
    root->val = h;
    root->left = dfs(root->left,h+1);
    root->right = dfs(root->right,h+1);

    return root;
}

BTnode* replace_node(BTnode*root){
    if(!root)return root;
    return dfs(root,1);
}


BTnode* delete_node(BTnode*root,int v){
    if(!root)return root;
    if(root->val == v){
        if(!root->left && !root->right)return NULL;
        else if(!root->left || !root->right)return (root->left == NULL ? root->right : root->left);
        root->val = root->left->val;
        root->left = delete_node(root->left , root->val);
        return root;
    }

    root->left = delete_node(root->left,v);
    root->right = delete_node(root->right,v);
    return root;
}

int main(){
    // BTnode*root = make();
    // print(root);
    BTnode*root = make_level();
    // print_level(root);
    cout<<height(root)<<endl;
    return 0;
}
