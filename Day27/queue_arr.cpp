#include<bits/stdc++.h>
using namespace std;

class MyQueue{
    vector<int>v;
    int FI;
    public:
    MyQueue(){
        FI = -1;
    }
    void push(int e){
        v.push_back(e);
        if(FI == -1)FI++;
    }
    int size(){
        return v.size();
    }
    bool empty(){
        return v.size() == 0;
    }
    int pop(){
        if(v.size() == 0)return -1;
        int e = v[FI];
        FI++;
        return e;
    }
    int front(){
        if(v.size() == 0)return -1;
        return v[FI];
    }
};
int main(){

    return 0;
}
