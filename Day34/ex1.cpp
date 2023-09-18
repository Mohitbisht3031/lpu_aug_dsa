#include<bits/stdc++.h>
using namespace std;

void tower(int n,char s,char a,char d){
    if(n == 1){
        cout<<"moving "<<n<<" from "<<s<<" to "<<d<<endl;
        return;
    }
    tower(n-1,s,d,a);
    cout<<"moving "<<n<<" from "<<s<<" to "<<d<<endl;
    tower(n-1,a,s,d);
    return;
}

int main(){ 
    return 0;
}
