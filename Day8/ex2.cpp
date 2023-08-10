#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n == 0 || n == 1)return 1;
    int ans = factorial(n-1);
    return n*ans;
}

int main(){
    return 0;
}
