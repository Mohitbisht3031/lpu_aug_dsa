#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr;
    // cout<<"size of vector is : "<<arr.size()<<endl;
    // arr.push_back(10);
    // arr.push_back(20);
    // cout<<"size of vector is : "<<arr.size()<<endl;
    // arr.pop_back();
    // cout<<"size of vector is : "<<arr.size()<<endl;
    // // int arr[5];
    vector<int>arr2(5,2);
    // cout<<"Size of arr2 is "<<arr2.size()<<endl;
    vector<int>arr3(5,1);
    cout<<"Size of arr3 is : "<<arr3.size()<<endl;
    // for(int i = 0;i<arr3.size();i++){
    //     cout<<arr3[i]<<endl;
    //     // cout<<arr3.at(i)<<endl;
    // }


    arr3[0] = 3;
    arr3[4] = 5;

    cout<<arr3.front()<<" "<<arr3.back()<<endl;

    for(int i = 0;i<arr2.size();i++)arr3.push_back(arr2[i]);
    cout<<arr3.size()<<endl;
    for(int i = 0;i<arr3.size();i++)cout<<arr3[i]<<" ";
    cout<<endl;
    return 0;
}
