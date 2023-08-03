#include<bits/stdc++.h>
using namespace std;

int main(){
// wap to make a calculator 
// 1. Add
// 2. minus
// 3. multiplication
// 4. divide
//select the option and give the i/p 
// do calculations till the users is not saying to end
   bool flag = 1;
  /* do{ cout<<"1. Add"<<endl;
    cout<<"2. minus"<<endl;
    cout<<"3. Multiply"<<endl;
    cout<<"4. divide"<<endl;

    int ch;
    cin>>ch;

    if(ch == 1){
        cout<<"Enter 2 numbers to add : ";
        int a,b;
        cin>>a>>b;
        cout<<"Sum of them is "<<a+b<<endl;
    }else if(ch == 2){
        cout<<"Enter 2 numbers to minu : ";
        int a,b;
        cin>>a>>b;
        if(a > b )cout<<"Sub of given num is "<<a-b<<endl;
        else cout<<"Sub of given num is "<<b-a<<endl;
    }else if(ch == 3){
        cout<<"Enter 2 numbers to multiply : ";
        int a,b;
        cin>>a>>b;
        cout<<"Product of given num is "<<a*b<<endl;
    }else{
        cout<<"Enter 2 numbers to divide : ";
        int a,b;
        cin>>a>>b;
        if(b !=0 && a >= b)cout<<"questionet is "<<a/b<<endl;
        else if(a <= b && a != 0) cout<<"questionet is "<<b/a<<endl;
        else cout<<"Not a valid situation.!!"<<endl;
    }
    char ch2;
    cout<<"Do you want to continue ? (y/n) : ";
    cin>>ch2;
    if(ch2 == 'n')flag = 0;
}while(flag);*/

    while(flag){
        cout<<"1. Add"<<endl;
    cout<<"2. minus"<<endl;
    cout<<"3. Multiply"<<endl;
    cout<<"4. divide"<<endl;

    int ch;
    cin>>ch;

    if(ch == 1){
        cout<<"Enter 2 numbers to add : ";
        int a,b;
        cin>>a>>b;
        cout<<"Sum of them is "<<a+b<<endl;
    }else if(ch == 2){
        cout<<"Enter 2 numbers to minu : ";
        int a,b;
        cin>>a>>b;
        if(a > b )cout<<"Sub of given num is "<<a-b<<endl;
        else cout<<"Sub of given num is "<<b-a<<endl;
    }else if(ch == 3){
        cout<<"Enter 2 numbers to multiply : ";
        int a,b;
        cin>>a>>b;
        cout<<"Product of given num is "<<a*b<<endl;
    }else{
        cout<<"Enter 2 numbers to divide : ";
        int a,b;
        cin>>a>>b;
        if(b !=0 && a >= b)cout<<"questionet is "<<a/b<<endl;
        else if(a <= b && a != 0) cout<<"questionet is "<<b/a<<endl;
        else cout<<"Not a valid situation.!!"<<endl;
    }
    char ch2;
    cout<<"Do you want to continue ? (y/n) : ";
    cin>>ch2;
    if(ch2 == 'n')flag = 0;
    }

    return 0;
}
