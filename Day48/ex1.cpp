#include<bits/stdc++.h>
using namespace std;

class BTnode{
    public:
    int val;
    BTnode*left;
    BTnode*right;
    BTnode(int val) : val(val),left(NULL),right(NULL){}
};

int maxWidth(BTnode*root){
    if(!root)return 0;
    int maxi = 0;
    queue<pair<BTnode*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        int s = q.size();
        maxi = max(maxi,(q.back().second - q.front().second)+1);
        for(int i = 0;i<s;i++){
            auto f = q.front();
            q.pop();
            if(f.first->left){
                q.push({f.first->left,f.second*2+1});
            }
            if(f.first->right){
                q.push({f.first->right,f.second*2+2});
            }
        }
    }
    return maxi;
}

int main(){
    return 0;
}
