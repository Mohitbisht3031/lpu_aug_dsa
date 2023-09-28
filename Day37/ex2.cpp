#include<bits/stdc++.h>
using namespace std;

vector<int> mergerKsortedArrays(vector<vector<int>>&mat){
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i = 0;i<mat.size();i++){
        for(int j = 0;j<mat[0].size();j++){
            pq.push(mat[i][j]);
        }
    }
    vector<int>v;
    while(!pq.empty()){v.push_back(pq.top());
    pq.pop();}
    return v;
}

int main(){ 
    // printTop2({"X","Z","A","D","E"},{1,3,2,2,5});
    return 0;
}
