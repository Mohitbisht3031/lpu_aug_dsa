#include<bits/stdc++.h>
using namespace std;

vector<string> makeStack(vector<int>&t,int n){
    vector<string>v;
    int c = 1;
    for(int i = 0;i<t.size();i++){
        if(t[i] == c){
            v.push_back("Push");
        }else{
            v.push_back("Push");
            v.push_back("Pop");
            i--;
        }
        c++;
    }
    return v;
}

int main(){
    return 0;
}
