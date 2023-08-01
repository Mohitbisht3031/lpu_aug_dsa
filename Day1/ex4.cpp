#include<bits/stdc++.h>
using namespace std;

int main(){
// write a program to greet a user with it's gender specific greetings
// Hello Mr. Y
// Hello Ms. L
    char ch;
    cout<<"Enter your first letter of your name : ";
    cin>>ch;
    // char ch2;
    // cout<<"Enter your gender (g/b): ";
    // cin>>ch2;

    int n;
    cout<<"Select your gender"<<endl;
    cout<<"1. Male"<<endl;
    cout<<"2. Female"<<endl;
    cout<<"Enter the choice : ";
    cin>>n;

    if(n == 1){
        cout<<"Hello Mr. "<<ch<<endl;
    }else if(n == 2){
        cout<<"Hello Ms. "<<ch<<endl;
    }else{
        cout<<"Wrong input's"<<endl;
    }

    return 0;
}
