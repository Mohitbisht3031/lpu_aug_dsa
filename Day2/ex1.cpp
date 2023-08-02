#include<bits/stdc++.h>
using namespace std;

int main(){
// wap to take 2 numbers from the user and swap them and show the output;
// 2 3 -> 3 2
// a = 2 , b = 3 -> a = 3 , b = 2 => a 3rd variable to do so.

// using 1 extra variable
    int a,b; //2,3
    cin>>a>>b;

    int c = a;
    a = b;
    b = c;
// 3 ,2

// without using extra variable

    a = a+b;
    b = a-b;
    a = a-b;
// 2 ,3
    swap(a,b);
// 3 , 2
    cout<<a<<" "<<b<<endl;

    return 0;
}
