#include<bits/stdc++.h>
using namespace std;

int main(){
// make the array syntax
    int arr[5];
    cout<<"Enter 5 numbers "<<endl;

// insertion
    for(int i = 0;i<5;i++){
        // int a;
        // cin>>a;
        // arr[i] = a;
        cin>>arr[i];
    }

    int ch;
    cout<<"choose a number b/w 1-5 : ";
    cin>>ch;
    cout<<endl;
    // deletion
    for(int i = ch-1;i<4;i++){
        arr[i] = arr[i+1];
    }

    for(int i = 0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // arry; -> size
    // myArr;

    // int size = sizeof(myArr) / sizeof(myArr[0]);
    // int size = sizeof(myArr) / sizeof(datatype it is of);
    return 0;
}
