#include<bits/stdc++.h>
using namespace std;

int main(){
// write a program to greet a user with it's gender specific greetings
// Hello Mr. Y
// Hello Ms. L
// using switch case
    char ch ;
    cout<<"Enter your first letter of name :";
    cin>>ch;
//    way 1
    // int op;
    // cout<<"Please select your gender :"<<endl;
    // cout<<"1. Male"<<endl;
    // cout<<"2. Female"<<endl;

    // cin>>op;

    // switch (op)
    // {
    // case 1:
    //     cout<<"Hello Mr. "<<ch<<endl;
    //     break;
    
    // case 2:
    //     cout<<"Hello Ms. "<<ch<<endl;
    //     break;
    
    // default:
    //     cout<<"worng input"<<endl;
    // }

// way 2
    char op;
    cout<<"What's your gender ?(g/b)";
    cin>>op;

    switch(op){
        case 'g':
        cout<<"Hello Ms. "<<ch<<endl;
        break;
        case 'b' :
        cout<<"Hello Mr. "<<ch<<endl;
        break;
        default:
        cout<<"Wrong input"<<endl;
    }

    return 0;
}
