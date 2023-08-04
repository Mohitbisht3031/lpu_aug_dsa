#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[] = {2,6,7};
    int arr2[] = {1,3,5,8,9};

    int arr3[8];

    int j = 0;
    for(int i = 0;i<3;i++){
        arr3[j] = arr1[i];
        j++;
    }
    for(int i =0;i<5;i++){
        arr3[j] = arr2[i];
        j++;
    }

    sort(arr3,arr3+8);

    for(int i = 0;i<8;i++)cout<<arr3[i]<<endl;

    return 0;
}
