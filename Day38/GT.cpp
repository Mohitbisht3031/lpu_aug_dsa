#include<bits/stdc++.h>
using namespace std;

class GTNode{
    public:
    int data;
    vector<GTNode*>child;
    GTNode(int d) : data(d){}
};

// not level wise
// void print(GTNode*root){
//     cout<<root->data<<"->";
//     for(int i= 0;i<root->child.size();i++){
//         cout<<root->child[i]->data<<",";
//     }
//     cout<<endl;
//     for(int i= 0;i<root->child.size();i++){
//         print(root->child[i]);
//     }
//     return;
// }
// // not level wise
// GTNode* make(){
//     int val;
//     cout<<"Enter the root val : ";
//     cin>>val;
//     if(val == -1)return NULL;
//     GTNode*root = new GTNode(val);
//     int n;
//     cout<<"Enter the no. of child it have :";
//     cin>>n;
//     for(int i = 0;i<n;i++){
//         root->child.push_back(make());
//     }   
//     return root; 
// }

// level wise 
GTNode* make(){
    queue<GTNode*>q;
    int val;
    cout<<"Enter the root val : ";
    cin>>val;
    if(val == -1)return NULL;
    GTNode*root = new GTNode(val);
    q.push(root);
    while(!q.empty()){
        GTNode* f = q.front();
        q.pop();
        cout<<"Enter the no. of child "<<f->data<<" have :";
        int n;
        cin>>n;
        for(int i = 0;i<n;i++){
            int cv;
            cout<<"enter child data"<<endl;
            cin>>cv;
            q.push(new GTNode(cv));
        }
    }

    return root;
}

// level wise
void print(){

}

int main(){ 
    GTNode* root = make();
    // print(root);
    return 0;
}
