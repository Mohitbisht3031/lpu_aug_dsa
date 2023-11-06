#include<bits/stdc++.h>
using namespace std;

    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int>in(n,-1);
        for(int i = 0;i<edges.size();i++){
            in[edges[i][1]]++;
        }   
        int ans = -1;
        for(int i = 0;i<in.size();i++){
            if(ans != -1 && in[i] == -1)return -1;
            else ans = i;
        }
        return ans;
    }

int main(){
    return 0;
}
