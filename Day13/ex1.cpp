#include<bits/stdc++.h>
using namespace std;

//self referencial class
class LLNode{
    public:
    int data;
    LLNode*next;

    void init(int d){
        data = d;
        next = NULL;
    }

    void init(int d,LLNode*ptr){
        data = d;
        next = ptr;
    }

};

LLNode* make(){
    int val;
    cin>>val;
    if(val == -1)return NULL;
    LLNode*head = new LLNode;
    head->init(val);
    LLNode*tail = head;
    while(1){
        cin>>val;
        if(val ==-1)break;
        LLNode*nn = new LLNode;
        nn->init(val);
        tail->next = nn;
        tail = tail->next;
    }
    return head;
}

// iterative
void print(LLNode*head){
    while(head){
        cout<<head->data<<"->";
        head = head->next;
    }
    return;
}

// recursion
void print_rec(LLNode*head){
    // base case
    if(head == NULL)return;
    cout<<head->data<<"->";
    print_rec(head->next);
}

int size(LLNode*head){
    int c= 0 ;
    while(head){
        c++;
        head = head->next;
    }
    return c;
}

LLNode* insert(LLNode*head, int val, int pos){
    int c =1;
    LLNode*temp= head;
    while(c < pos-1){
        temp = temp->next;
        c++;
    }
    LLNode*nn = new LLNode;
    // nn->init(val,temp->next);
    nn->init(val);
    nn->next = temp->next;
    temp->next = nn;
    return head;
}

int main(){
    LLNode*head = make();
    // print(head);
    // cout<<endl;
    head = insert(head,10,3);
    // cout<<size(head)<<endl;
    print(head);
    return 0;
}
