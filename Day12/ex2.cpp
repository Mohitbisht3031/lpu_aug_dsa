#include<bits/stdc++.h>
using namespace std;

int main(){
    int *ptr = (int*)malloc(sizeof(int));//DMA in C

    int*ptr2 = new int;//DMA in C++

    free(ptr);
    delete ptr2;
    return 0;
}
