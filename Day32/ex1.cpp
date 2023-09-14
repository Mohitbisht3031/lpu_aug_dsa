#include<bits/stdc++.h>
using namespace std;

// brute force apporach
void reverse(stack<int>&stk){
    if(stk.size() <= 1)return ;
    vector<int>v;
    while(!stk.empty()){
        v.push_back(stk.top());
        stk.pop();
    }
    for(int e:v){
        stk.push(e);
    }
    return;
}
// recursive code

void insert(stack<int>&stk,int v){
    if(stk.size() == 0){
        stk.push(v);
        return;
    }

    int t = stk.top();
    stk.pop();
    insert(stk,v);
    stk.push(t);
    return ;
}

void reverse(stack<int>&stk){
    if(stk.size() <= 1)return ;
    int t = stk.top();
    stk.pop();
    reverse(stk);
    insert(stk,t);
    return;
}

int main(){ 

    return 0;
}
