#include<bits/stdc++.h>
using namespace std;
#define s stack<int>

class nStack{
    vector<s>v;
    vector<int>maxS;
    public:
    nStack(int Size,int n){
        v = vector<s>(Size);
        maxS = vector<int>(n,Size/n);
    }

    bool push(int e,int m){
        if(m > maxS.size() || maxS[m] <= 0)return false;
        v[m].push(e);
        maxS[m]--;
        return 1;
    }
    int pop(int m){
        if(m > maxS.size() || v[m].size() == 0)return -1;
        int t = v[m].top();
        v[m].pop();
        return t;
    }
};

int main(){
    return 0;
}
