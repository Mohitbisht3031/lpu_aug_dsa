#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int>&v){
    for(int i = 1;i<v.size();i++){
        int key = v[i];
        int j = i-1;
        while(j >= 0 && v[j] > key){
            v[j+1] = v[j];
            j--;
        }
        v[j] = key;
    }
    return ;
}

int main(){
    return 0;
}
