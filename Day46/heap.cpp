#include<bits/stdc++.h>
using namespace std;

class Heap{
    vector<int>v;
    public:
    int size(){
        return v.size();
    }
    bool empty(){
        return v.size() == 0;
    }
    void push(int ele){
        v.push_back(ele);
        int ci = v.size()-1;
        int pi = (ci-1)/2;
// uphepify
        while(ci > 0){
            if(v[ci] < v[pi]){
                swap(v[ci],v[pi]);
            }else break;
            ci = pi;
            ci = (ci-1)/2;
        }
        return;
    }
    int pop(){
        if(v.size() == 0)return INT_MIN;
        int ans = v[0];
        swap(v[0],v[v.size()-1]);
        v.pop_back();

        int pi = 0;
        int lci = 2*pi+1;
        int rci = 2*pi+2;

// down heapify
        while(lci < v.size()){
            int i = pi;
            if(v[pi] > v[lci]){
                i= lci;
            }
            if(v[pi] > v[rci]){
                i = rci;
            }
            if(i == pi)break; //already at the correct position
            swap(v[pi],v[i]);
            pi = i;
            lci = 2*pi+1;
            rci = 2*pi+2;
        }

        return ans;
    }
};

int main(){
    return 0;
}
