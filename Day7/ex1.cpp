#include<bits/stdc++.h>
using namespace std;

int FD(int num){
    int d = 0;
    while(num){
        d = num%10;
        num/=10;
    }
    return d;
}

// int gcd(int a,int b){
//     int d = min(a,b);
//     while(d > 0){
//         if(a%d == 0 && b%d == 0)break;
//         d--;
//     }
//     return d;
// }

int countBP(int arr[],int n){
    int c = 0;
    for(int i = 0;i<n;i++){
        int fd = FD(arr[i]);
        for(int j = i+1;j<n;j++){
            int ld = arr[j]%10;
            if(__gcd(fd,ld) == 1)c++;
        }
    }
    return c;
}

int main(){
    return 0;
}
