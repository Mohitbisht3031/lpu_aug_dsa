#include<bits/stdc++.h>
using namespace std;

class nStack{
    vector<int>v;
    vector<int>top;
    vector<int>next;
    int free;
    public:
    nStack(int Size,int n){
        v = vector<int>(Size);
        top = vector<int>(n,-1);
        next = vector<int>(Size,-1);
        for(int i = 1;i<Size;i++){
            next[i-1] = i;
        }
        free = 0;
    }

    bool push(int e,int m){
        if(free == -1)return 0;
        int i = free;
        free = next[i];
        v[i] = e;
        next[i] = top[m-1];
        top[m-1] = i;
        return 1;
    }
    int pop(int m){
        if(top[m-1] == -1)return -1;
        int i = top[m-1];
        top[m-1] = next[i];
        next[i] = free;
        free = i;

        return v[i];
    }

};

int main(){
    return 0;
}
