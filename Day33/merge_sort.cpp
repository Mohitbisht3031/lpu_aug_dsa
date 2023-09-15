#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&v,int s,int e){
    if(s>=e)return;
    int mid = s+(e-s)/2;
    vector<int>vec;
    int i = 0;
    int j = mid+1;
    while(i <= mid && j <= e){
        if(v[i] <= v[j]){
            vec.push_back(v[i]);
            i++;
        }else{
            vec.push_back(v[j]);
            j++;
        }
    }

    while(i <= mid){
        vec.push_back(v[i++]);
    }

    while(j <= e){
        vec.push_back(v[j++]);
    }

    for(int k = s;k<=e;k++){
        v[k] = vec[k-s];
    }
    return ;
}

void mergeSort(vector<int>&v,int s,int e){
    if(s >= e)return; 

    int mid = s+(e-s)/2;
    mergeSort(v,s,mid);
    mergeSort(v,mid+1,e);
    merge(v,s,e);
    return;
}

void mergeSort(vector<int>&v){
    if(v.size() <= 1)return ;

    mergeSort(v,0,v.size()-1);
    return;
}

int main(){ 

    return 0;
}
