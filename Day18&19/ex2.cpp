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

// slow and fast pointer approach
LLNode* middle(LLNode*h){
    if(!h || !h->next)return h;
    LLNode*slow = h;
    LLNode*fast = h->next;
    while(fast){
        if(!fast->next)return slow;
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

int main(){
    return 0;
}
