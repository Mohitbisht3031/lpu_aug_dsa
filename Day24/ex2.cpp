#include<bits/stdc++.h>
using namespace std;

int evaluate(string ex){
    stack<int>stk;
    for(auto ch : ex){
        if(ch >= '0' && ch <= '9'){
            stk.push(ch-'0');
        }else{
            int a = stk.top();
            stk.pop();
            int b = stk.top();
            stk.pop();
            if(ch == '+')stk.push(a+b);
            else if(ch == '-')stk.push(b-a);
            else if(ch == '*')stk.push(b*a);
            else if(ch == '/')stk.push(b/a);
        }
    }
    return stk.top();
}

int main(){
    return 0;
}
