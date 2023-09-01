#include<bits/stdc++.h>
using namespace std;

class MyStack{
    vector<int>v;
    public:
    int size(){
      return v.size();  
    }
    bool empty(){
        return v.size() == 0;
    }
    int top(){
        if(v.size() == 0)return -1;
        return v[v.size()-1];
    }
    int pop(){
        if(v.size() == 0)return -1;
        int t = v[v.size()-1];
        v.pop_back();
        return t;
    }
    void push(int e){
        v.push_back(e);
        return;
    }
};

int main(){

    return 0;
}
