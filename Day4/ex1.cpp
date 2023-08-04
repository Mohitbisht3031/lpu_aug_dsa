#include<bits/stdc++.h>
using namespace std;

int main(){
// wap to make a calculator 
// 1. Add
// 2. Multipy
//select the option and give the i/p 
// do calculations till the users is not saying to end
// ask user how many numbers he want to add or multiply
   bool flag = 1;

    while(flag){
        cout<<"1. Add"<<endl;
    cout<<"2. multiply"<<endl;

    int ch;
    cin>>ch;

    cout<<"How many numbers you want to give ?";
    int n;
    cin>>n;
    int arr[n];
    cout<<"give numbers :";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    if(ch == 1){
        int ans = 0;
        for(int i = 0;i<n;i++){
            ans+=arr[i]; // -> ans = ans+arr[i];
        }
        cout<<"Sum of numbers are :"<<ans<<endl;
    }else if(ch == 2){
        int ans = 1;
        for(int i = 0;i<n;i++){
            ans*=arr[i]; // ans = ans*arr[i];
        }
        cout<<"Product of given numbers are : "<<ans<<endl;
    }else{
        cout<<"Choose a walid option"<<endl;
    }
    char ch2;
    cout<<"Do you want to continue ? (y/n) : ";
    cin>>ch2;
    if(ch2 == 'n')flag = 0;
    }

    return 0;
}
