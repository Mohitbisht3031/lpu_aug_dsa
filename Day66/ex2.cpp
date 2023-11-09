#include<bits/stdc++.h>
using namespace std;

    int countHomogenous(string s) {
        long long int c = 0;
        int mod  = 1e9+7;
        for(int i = 0;i<s.size();i++){
            int j = i;
            while(j < s.size() && s[i] == s[j]){
                c = (c+(j-i+1))%mod;
                j++;
            }
            i = j-1;
        }
        return c;
    }

int main(){
    return 0;
}
