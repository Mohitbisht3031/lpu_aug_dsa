#include<bits/stdc++.h>
using namespace std;

int kthSmallest(vector<int>&nums,int k){
    priority_queue<int>pq;
    for(auto e:nums){
        if(pq.size() < k){
            pq.push(e);
        }else{
            if(pq.top() > e){
                pq.pop();
                pq.push(e);
            }
        }
    }
    return pq.top();
}

int main(){
    return 0;
}
