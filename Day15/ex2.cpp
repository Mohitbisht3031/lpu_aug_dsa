#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1;
    vector<vector<int>>v2(5,vector<int>(5,1));
    for(int i = 0 ;i<v2.size();i++){
        for(int j = 0;j<v2[0].size();j++){
            cout<<v2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
