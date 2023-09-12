#include<bits/stdc++.h>
using namespace std;

void reverse(stack<int>&stk){
    if(stk.size() == 1){
        cout<<stk.top()<<endl;
        return;
    }
    int e = stk.top();
    stk.pop();
    reverse(stk);
    cout<<e<<endl;
    stk.push(e);
    return;
}

int main(){
    stack<int>stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    reverse(stk);
    return 0;
}
