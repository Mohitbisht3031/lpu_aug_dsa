#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    int arr[] = {4,1,6,2,3};
    // inbuild sort
    sort(arr,arr+n);

    for(int i = 0;i<n;i++)cout<<arr[i]<<" ";

    return 0;
}
