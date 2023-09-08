#include<bits/stdc++.h>
using namespace std;

class LLNode{
    public:
    int d;
    LLNode*next;
    LLNode(int d) : d(d),next(NULL){}
};

class MyQueue{
    LLNode*head;
    LLNode*tail;
    int s;
    public:
    MyQueue(){
        head = NULL;
        tail = head;
        s = 0;
    }
    void push(int e){
        if(!head){
            head = new LLNode(e);
            tail = head;
        }else{
            tail->next = new LLNode(e);
            tail = tail->next;
        }
    }
    bool empty(){
        return s == 0;
    }
    int size(){
        return s;
    }
    int pop(){
        if(s == 0)return -1;
        int t = head->d;
        LLNode*temp = head;
        head = head->next;
        s--;
        delete temp;
        return t;
    }
    int front(){
        if(s == 0)return -1;
        return head->d;
    }
};

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<q.size()<<" "<<q.empty()<<" "<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    return 0;
}
