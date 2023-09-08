#include<bits/stdc++.h>
using namespace std;

// implementation of queue using 2 stacks
class MyQueue{
    stack<int>s1;
    stack<int>s2;
    public:
    MyQueue(){
    }
    void push(int e){
        s1.push(e);
    }
    bool empty(){
        return s1.size() == 0;
    }
    int size(){
        return  s1.size();
    }
    int pop(){
        if(s1.size() == 0)return -1;
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int t = s2.top();
        s2.pop();

        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return t;
    }
    int front(){
        if(s1.size() == 0)return -1;
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int t = s2.top();

        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return t;
    }
};

int main(){
    return 0;
}
