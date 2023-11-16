#include<bits/stdc++.h>
using namespace std;

    void dfs(string&s,int i,unordered_map<string,int>&mp,string &ans){
        if(i >= s.size()){
            if(mp.count(s))return;
            ans = s;
            return;
        }
        s[i] = '1';
        dfs(s,i+1,mp,ans);
        if(ans.size() > 0)return ;
        s[i]='0';
        dfs(s,i+1,mp,ans);
        return;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_map<string,int>mp;
        for(auto e:nums)mp[e]++;
        string s(nums.size(),'0');
        string ans = "";
        dfs(s,0,mp,ans);
        return ans;
    }

int main(){
    return 0;
}
