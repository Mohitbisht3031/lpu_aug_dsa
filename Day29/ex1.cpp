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

class MyStack{
    queue<int>q;
    public:
    MyStack(){
    }
    int size(){
        return q.size();
    }
    bool empty(){
        return q.size() == 0;
    }
    int top(){
        if(q.size() == 0)return -1;
        return q.back();
    }
    int pop(){
        if(q.size() == 0)return -1;
        for(int i = 0;i<q.size()-1;i++){
            q.push(q.front());
            q.pop();
        }
        int t = q.front();
        q.pop();
        return t;
    }
    void push(int e){
        q.push(e);
    }
};

int main(){
    return 0;
}
