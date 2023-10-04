#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {3,1,4,2,5};
    vector<int>v1 = {5,4,3,2,1};
    if(is_sorted(v1.begin(),v1.end(),greater<int>())){
        cout<<"Given arrya is sorted"<<endl;
    } else cout<<"given array is not sorted"<<endl;
    // unordered_set<int>s;
    // s.insert(5);
    // s.insert(100);
    // s.insert(8);
    // s.insert(1);
    // s.insert(0);
    // s.insert(100);
    // s.insert(100);
    // s.insert(100);
    // // if(s.count(8)){
    // //     cout<<"number is present in the set"<<endl;
    // // }else cout<<"number is not present in the set"<<endl;
    // for(auto e:s){
    //     cout<<e<<endl;
    // }
    return 0;
}
