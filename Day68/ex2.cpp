#include<bits/stdc++.h>
using namespace std;

    int countPalindromicSubsequence(string s) {
        unordered_map<int,int>mp;
        vector<int>freq(s.size(),0) ; 
        for(int i = 0;i<s.size();i++){
            freq[i] = mp.size();
            mp[s[i]]++;
        } 
        mp.clear();
        int c = 0;
        for(int i = 0;i<s.size();i++){
            if(mp.count(s[i])){
                if(mp[s[i]] != i-1){
                    c+=(freq[i]-freq[mp[s[i]]]);
                    mp[s[i]] = i;
                }
            }else mp[s[i]] = i;
        }
        return c;
    }

int main(){
    return 0;
}
