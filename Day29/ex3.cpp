#include<bits/stdc++.h>
using namespace std;

class MyStack{
    stack<int>stk;
    int mini ;
    public:
    MyStack(){
        mini = INT_MAX;
    }
    int size(){
        return stk.size();
    }
    bool empty(){
        return stk.size() == 0;
    }
    int top(){
        return (stk.size() == 0 ? -1 : stk.top());
    }
    void pop(){
        if(stk.size() == 0)return;
        if(stk.top() == mini){
            stk.pop();
            int m = INT_MAX;
            stack<int>s2;
            while(!stk.empty()){
                s2.push(stk.top());
                stk.pop();
                m = min(m,s2.top());
            }
            
            while(!s2.empty()){
                stk.push(s2.top());
                s2.pop();
            }
            mini = m;
        }else stk.pop();
        return;
    }
    void push(int e){
        mini = min(mini,e);
        stk.push(e);
    }
    int mini(){
        return mini;
    }
};

int main(){
    return 0;
}
