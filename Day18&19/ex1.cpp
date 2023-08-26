#include<bits/stdc++.h>
using namespace std;

class LLNode
{
    public:
    int val;
    LLNode*next;

    LLNode(int val){
        this->val = val;
        this->next = NULL;
    }
};

LLNode* merge(LLNode*h1,LLNode*h2){
    if(!h1 || !h2){
        return (h1 == NULL ? h2 : h1);
    }
    LLNode*fh = new LLNode(-1);
    LLNode*ft = fh;
    LLNode*t1 = h1;
    LLNode*t2 = h2;

    while(t1 && t2){
        if(t1->val >= t2->val){
            ft->next = t1;
            t1 = t1->next;
        }else{
            ft->next = t2;
            t2 = t2->next;
        }
        ft = ft->next;
    }

    if(t1 || t2){
        ft->next = (t1 == NULL? t2 : t1);
    }

    return fh->next;
}

int main(){
    return 0;
}
