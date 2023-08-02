#include<bits/stdc++.h>
using namespace std;

int main(){
// wap to take 3 intergers from the user and return max of those 3
// 2 ,3,4 -> 4

    int a,b,c;
    cout<<"enter 3 numbers";
    cin>>a>>b>>c;

    if(a > b){
        if(a > c){
            cout<<" max is "<<a<<endl;
        }else cout<<"max is "<<c<<endl;
    }else{

        (b>c) ? cout<<"Max is "<<b<<endl : cout<<"Max is "<<c<<endl;

        // if(b > c){
        //     cout<<"Max is "<<b<<endl;
        // }else cout<<"Max is "<<c<<endl;
    }

    return 0;
}
