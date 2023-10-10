#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;

try{ 
    try{
        if(a == 0)throw 1;
        cout<<10/a<<endl;
    }catch(char e){
        // implement the logic her for recovery
        cout<<"exception "<<e<<" caught "<<endl;
    }catch(int e){
        cout<<"exception "<<e<<" caught "<<endl;
        throw; //re throwing
    }catch(double e){
        cout<<"exception "<<e<<" caught "<<endl;
    }
}catch(...){
    cout<<"inside the outer catch"<<endl;
}
    cout<<"Ending program normally"<<endl;
    return 0;
}
