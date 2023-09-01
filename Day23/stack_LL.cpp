#include<bits/stdc++.h>
using namespace std;

class LLnode{
    public:
    int d;
    LLnode*next;
    LLnode(int d){
        this->d = d;
        this->next = NULL;
    }
};

// class MyStack{
//     LLnode*head;
//     int size;
//     public:
//     MyStack(){
//         this->head = NULL;
//         this->size = 0;
//     }
//     int size(){
//         return this->size;
//     }
//     bool empty(){
//         return this->size == 0;
//     }
//     int top(){
//         if(this->size == 0)return -1;
//         return head->d;
//     }
//     int pop(){
//         if(this->size == 0)return -1;
//         LLnode*temp = head;
//         head = head->next;
//         size--;
//         int t = temp->d;
//         delete temp;
//         return t;
//     }
//     void push(int e){
//         LLnode*nn = new LLnode(e);
//         nn->next = head;
//         head = nn;
//         size++;
//         return;
//     }
// };

int main(){
    stack<int>stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);

    while(!stk.empty()){
        cout<<stk.top()<<endl;
        stk.pop();
    }

    return 0;
}
