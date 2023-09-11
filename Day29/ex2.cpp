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

class MyQueue{
    stack<int>stk;
    public:
    int size(){
        return stk.size();
    }
    bool empty(){
        return stk.size() == 0;
    }
    void front(int&t){
        if(stk.size() == 1){
            t = stk.top();
            return;
        }
        int e = stk.top();
        stk.pop();
        front(t);
        stk.push(t);
        return;
    }
    int front(){
        int t = -1;
        if(stk.size() == 0)return -1;
        front(t);
        return t;
    }

    void pop(int&t){
        if(stk.size() == 1){
            t = stk.top();
            stk.pop();
            return;
        }
        int e = stk.top();
        stk.pop();
        pop(t);
        stk.push(e);
        return;
    }

    int pop(){
        if(stk.size() == 0)return -1;
        int t = -1;
        pop(t);
        return t;
    }
    void push(int e){
        stk.push(e);
    }
};

int main(){
    MyQueue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    while(!q.empty()){
        cout<<q.pop()<<endl;
    }
    return 0;
}
