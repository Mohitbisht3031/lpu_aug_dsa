#include<bits/stdc++.h>
using namespace std;

// brute force approach TC : O(n^2)
int bestTimeToClose(vector<char>&logs){
    int c = INT_MAX;
    int ans = 0;
    for(int i = 0;i<logs.size();i++){
        int co = 0;
        for(int j = 0;j<logs.size();j++){
            if(j < i && logs[j] == 'N')co++;
            else if(j >= i && logs[j] == 'Y')co++;
        }
        if(co < c){
            c = co;
            ans = i;
        }
    }

    int co = 0;
    for(int i = 0;i<logs.size();i++){
        if(logs[i] == 'N')co++;
    }
    if(co < c)return logs.size();
    return ans;
}

// optimize 
int bestTimeToClose(vector<char>&logs){
    int n = 0;
    for(int i = 0;i<logs.size();i++){
        if(logs[i] == 'N')n++;
    }
    int y = 0;
    int ind = logs.size();
    int c = n;
    for(int i = logs.size()-1;i>=0;i--){
        if(logs[i] == 'Y')y++;
        else n--;
        if(y+n <= c){
            c = y+n;
            ind = i;
        }
    }
    return ind;
}

int main(){
    return 0;
}
