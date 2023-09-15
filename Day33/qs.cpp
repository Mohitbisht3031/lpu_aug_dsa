#include<bits/stdc++.h>
using namespace std;

int helper(vector<int>&v,int s,int e){
    if(s >= e)return;
    int c = 0;
    for(int i = s+1;i<=e;i++){
        if(v[s] >= v[i])c++;
    }
    swap(v[s],v[s+c]);
    int i =s;
    int j = e;
    while(i <= c+s && j >= c+s){
        if(v[i] >= v[c+s] && v[j] < v[c+s]){
            swap(v[i],v[j]);
        }else if(v[i] <= v[c+s]){
            i++;
        }else j++;
    } 
    return s+c; 
}

void qs(vector<int>&v,int s,int e){
    if(s >= e)return;

// gonna return me the ind of the first ele after palcing it in the right postion
    int ind = helper(v,s,e);

// sort the left part of the arry starting from s->ind
    qs(v,s,ind);
    // sort the arry on the right part starting from ind+1->e
    qs(v,ind+1,e);
    return;
}

void qs(vector<int>&v){
    if(v.size() <= 1)return ;
    qs(v,0,v.size()-1);
    return ;
}

int main(){ 

    return 0;
}
