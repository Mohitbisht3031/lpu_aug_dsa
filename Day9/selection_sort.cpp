#include<bits/stdc++.h>
using namespace std;

void selection_sort(vector<int>&v){
    for(int i = 0;i<v.size();i++){
        int minI = i;
        for(int j = i+1;j<v.size();j++){
            if(v[j] < v[minI]){
                minI = j;
            }
        }
        if(minI!= i){
            swap(v[minI],v[i]);
        }
    }
    return;
}

int main(){
    return 0;
}
