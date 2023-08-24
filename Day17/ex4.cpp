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

// node of a double linked list is gonna look like
class DLLNode{
    public:
    int val;
    DLLNode*prev;
    DLLNode*next;

    DLLNode(int val){
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

LLNode* insertGCD(LLNode*head){
    if(!head || !head->next)return head;
    LLNode*t = head;
    while(t->next){
        LLNode* nn = new LLNode(__gcd(t->val,t->next->val));
        nn->next = t->next;
        t->next = nn;
        t = t->next->next;
    }
    return head;
}

int main(){
    return 0;
}
