#include<bits/stdc++.h>
using namespace std;

int BS_recursion(vector<int>&v,int s,int e,int t){
    if(s > e)return -1;
    int mid = s+(e-s)/2;
    int ans = -1;
    if(v[mid] == t)return mid;
    else if(v[mid] < t){
        ans = BS_recursion(v,mid+1,e,t);
    }else {
        ans = BS_recursion(v,s,mid-1,t);
    }
    return ans;
}
int main(){
    return 0;
}
