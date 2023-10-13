#include<bits/stdc++.h>
using namespace std;

class LLnode{
    public:
    int val;
    LLnode*next;
    LLnode(int val) : val(val),next(NULL){}
};

LLnode* mergeKsortedLL(vector<LLnode*>&arr){
    priority_queue<pair<int,LLnode*>,vector<pair<int,LLnode*>>,greater<pair<int,LLnode*>>>pq;

    for(int i = 0;i<arr.size();i++){
        LLnode*h = arr[i];
        while(h){
            pq.push({h->val,h});
            h = h->next;
        }
    }

    LLnode*nh = new LLnode(-1);
    LLnode*t = nh;

    while(!pq.empty()){
        pair<int,LLnode*>to = pq.top();
        pq.pop();
        t->next = to.second;
        t = to.second;
    }
    t->next = NULL;
    return nh->next;
}

int main(){
    return 0;
}
