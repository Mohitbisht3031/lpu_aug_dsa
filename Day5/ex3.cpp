#include<bits/stdc++.h>
using namespace std;

int sum(int a){
    return a;
}

int sum(int a,int b){
    return a+b;
}

int sum(int a,int b,int c){
    return a+b+c;
}

int sum(int a ,int b ,int c ,int d){
    return a+b+c+d;
}

// can give 1-4;
void cal(){
    cout<<"Choose "<<endl;
    cout<<"1. Sum"<<endl;
    cout<<"2> multiply"<<endl;
    int ch ;
    cin>>ch;
    if(ch == 1){
        int n;
        cout<<"How many numbers you want to input"<<endl;
        cin>>n;
        int arr[n];
        for(int i = 0;i<n;i++)cin>>arr[i];
        cout<<"Sum of the elements is : "<<sum(arr[0])<<endl;
        cout<<"Sum of the elements is : "<<sum(arr[0],arr[1])<<endl;
        cout<<"Sum of the elements is : "<<sum(arr[0],arr[1],arr[2])<<endl;
    }else{
        
        int arr[] = {1,1,1,1};
        int n;
        cout<<"How many numbers you want to input"<<endl;
        cin>>n;
        for(int i = 0;i<n;i++)cin>>arr[i];
        int p = 1;
        for(int i = 0;i<4;i++)p*=arr[i];
        cout<<"product is "<<p<<endl;
    }
    return ;
}

int main(){

    bool f = 1;
    while(f){
        cout<<"You want to calculate ? (y/n) : ";
        char ch;
        cin>>ch;
        if(ch == 'y')cal();
        else f= 0;
    }

    return 0;
}
