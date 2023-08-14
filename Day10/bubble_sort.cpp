#include<bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int>&v){
    for(int i = 0;i<v.size()-1;i++){
        for(int j = 0;j<v.size()-i-1;j++){
            if(v[j] > v[j+1])swap(v[i],v[j+1]);
        }
    }
    return;
}

int main(){
    return 0;
}
