#include<bits/stdc++.h>
using namespace std;

bool isOpening(char ch){
    return ch == '{' || ch == '(' || ch == '[';
}

bool isSame(char ch1,char ch2){
    return (ch1 == '{' && ch2 == '}') || (ch1 == '(' && ch2 == ')') || (ch1 == '[' && ch2 == ']');
}

bool balancedString(string s){
    stack<char>stk;
    // for each loop
    for(char ch : s){
        if(isOpening(ch)){
            stk.push(ch);
        }else{
            if(!stk.empty() && isSame(stk.top(),ch))stk.pop();
            else return 0;
        }
    }
    return stk.size() == 0;
}

int main(){
    return 0;
}
