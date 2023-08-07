#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[],int arr2[]){
    
    int i = 0;
    int j = 0;
    int arr3[8];
    int s1 = 3;
    int s2 = 5;
    int k = 0;
    while(i < s1 && j <s2){
        if(arr1[i] <= arr2[j]){
            arr3[k] = arr1[i];
            i++;
        }else{
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    while(i < s1){
        arr3[k] = arr1[i];
        i++;
        k++;
    }


    while(j < s2){
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    for(int l = 0;l<8;l++)cout<<arr3[l]<<" ";
    return ;
}

int main(){
    int arr1[] = {2,6,7};
    int arr2[] = {1,3,5,8,9};

    merge(arr1,arr2);

    return 0;
}
