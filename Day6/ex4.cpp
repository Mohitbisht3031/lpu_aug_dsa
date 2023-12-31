#include<bits/stdc++.h>
using namespace std;

// iterative approach
// int reverse(int n){
//     int nn = 0;
//     while(n){
//         nn*=10;
//         nn+=(n%10);
//         n/=10;
//     }
//     return nn;
// }

// recursive approach
/*
-> Base case
-> Recursive call
     ^
     |

-> small cal.
*/

// iterative approach
// int len(int n){
//     if(n < 10)return 1;
//     int c = 0;
//     while(n){
//         c++;
//         n/=10;
//     }

//     return c;
// }

// recursion
int len(int n){
    if(n < 10)return 1;
    int l = len(n/10); //12
    return 1+l;
}

int reverse(int n){
    if(n>=1 && n<=9)return n;

    int nn = reverse(n/10); //12 -> 21

    int d = n%10;
    d*=pow(10,len(nn)); // implement this len function in HW
    return d+nn; //321
}

int main(){
    int n = 123;
    cout<<reverse(n)<<endl;
    return 0;
}
