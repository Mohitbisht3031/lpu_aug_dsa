#include<bits/stdc++.h>
using namespace std;

// implementation of stack using 2 queue
class MyStack{
    queue<int>q1;
    queue<int>q2;
    public:
    void push(int e){
        q1.push(e);
    }
    bool empty(){
        return q1.empty();
    }
    int size(){
        return q1.size();
    }
    int pop(){
        if(q1.size() == 0)return -1;
        while(q1.size() > 1){
            q2.push(q1.front());
            q1.pop();
        }
        int t = q1.front();
        q1.pop();

        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return t;
    }
    int top(){
        if(q1.size() == 0)return -1;
        return q1.back();
    }
};
int main(){
    return 0;
}
