#include<bits/stdc++.h>
using namespace std;

int main(){ 
    int f = 364;
    int*frnd = new int ; // runtime,Dynamic
    *frnd = 364;

    int *arr = new int[10];
    // int arr[10];
    arr[0] = 10;
    arr[1] = 364;
    cout<<*(arr+0)<<" "<<*(arr+1)<<endl;;

    delete frnd;
    delete [] arr;
    
    return 0;
}
