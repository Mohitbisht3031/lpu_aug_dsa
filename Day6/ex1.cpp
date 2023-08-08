#include<bits/stdc++.h>
using namespace std;
/* RULE for Function overloading
-> fn with same name but different no. of arg
-> fn with same name but different type of arg
-> both
*/

int MAX(int a,int b){
    return (a > b ? a : b);
}

int MAX(int a,int b,int c){
    if(a > b){
        if(a > c)return a;
        else return c;
    }else{
        if(b > c)return b;
        else return c;
    }
}

int MAX(int a,int b,int c,int d){
    return MAX(MAX(a,b,c),d);
}

int main(){
    return 0;
}
