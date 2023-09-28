#include<bits/stdc++.h>
using namespace std;

int main(){ 
    priority_queue<int>pq; //max pq
    // priority_queue<int,vector<int>,greater<int>()>pq; //min pq
    for(int i = 0;i<5;i++){
        int a;
        cin>>a;
        pq.push(a);
    }

    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
    return 0;
}
