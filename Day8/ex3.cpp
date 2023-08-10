#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr;
    cout<<"size of vector is : "<<arr.size()<<endl;
    arr.push_back(10);
    arr.push_back(20);
    cout<<"size of vector is : "<<arr.size()<<endl;
    arr.pop_back();
    cout<<"size of vector is : "<<arr.size()<<endl;
    // int arr[5];
    vector<int>arr2(5);
    cout<<"Size of arr2 is "<<arr2.size()<<endl;
    vector<int>arr3(5,1);
    cout<<"Size of arr3 is : "<<arr3.size()<<endl;
    for(int i = 0;i<arr3.size();i++){
        cout<<arr3[i]<<endl;
        // cout<<arr3.at(i)<<endl;
    }
    return 0;
}
