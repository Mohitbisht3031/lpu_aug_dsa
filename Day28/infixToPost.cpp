#include<bits/stdc++.h>
using namespace std;

bool check(char ch1,char ch2){
    if(ch1 == ch2)return 0;
    
    if(ch1 == '^')return 1;
    string s1= "*/";
    string s2 = "+-";
    if((s1.find(ch1) != string::npos && s1.find(ch2) != string::npos) || (s2.find(ch1) != string::npos && s2.find(ch2) != string::npos))return 0;
    if(s1.find(ch1) != string::npos && s2.find(ch2) != string::npos)return 1;
    return 0;
}

string infixToPost(string in){
    string op = "";

    stack<char>stk;
    for(int i = 0;i<in.size();i++){
        if(in[i] >= '0' && in[i] <= '9'){
            op+=in[i];
        }else{
            if(in[i] == '(')stk.push(in[i]);
            else if(in[i] == ')'){
                while(!stk.empty() && stk.top() == '('){
                    op+=stk.top();
                    stk.pop();
                }
                if(!stk.empty())stk.pop();
            }else{
                if(stk.empty() || stk.top() == '(')stk.push(in[i]);
                else{
                    if(check(in[i],stk.top())){
                        stk.push(in[i]);
                    }else{
                        op+=stk.top();
                        stk.pop();
                        stk.push(in[i]);
                    }
                }
            }
        }
        while(!stk.empty()){
            op+=stk.top();
            stk.pop();
        }
        return op;
    }

    return op;
}

int main(){

    return 0;
}
