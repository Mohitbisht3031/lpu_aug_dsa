#include<bits/stdc++.h>
using namespace std;

// approach 1
// TC -> O(n) -> ??
int mySqrt(int n){
    int ans= 0;
    for(int i = 1;i<=(n/2);i++){
        if(i*i > n)break;
        ans = i;
    }
    return ans;
}

// approach 2
// TC -> O(log(n))
int mySqrt(int n){
    int lo = 1;
    int hi = n/2;
    int ans = 0;
    while(lo <= hi){
        int mid = lo+(hi-lo)/2; //-> (lo+hi)/2 -> a value which is greater then the bound of int to store
        if((mid*mid) <= n){
            ans = max(mid,ans);
            lo = mid+1;
        }else{
            hi = mid-1;
        }
    }
    return ans;
}

int main(){
    return 0;
}
