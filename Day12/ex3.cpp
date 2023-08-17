#include<bits/stdc++.h>
using namespace std;

class LLNode{
    public:
    int data;
    LLNode*next; //self referencial class

    void init(int d){
        data = d;
        next = NULL;
    }

    void init(int d,LLNode*ptr){
        data = d;
        next = ptr;
    }

};

int main(){
    // LLNode head;
    // head.init(1);
    LLNode*head = new LLNode;
    head->init(1);
    return 0;
}
