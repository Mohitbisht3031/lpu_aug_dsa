#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    // A(){
    //     cout<<"inside cons"<<endl;
    // }
    // ~A(){
    //     cout<<"inside des"<<endl;
    // }
};

class B : public A{
};

int main(){
    A a;
    // A*ptr = new B();
    B b;

    try{
        throw a;
    }catch(B e){
        cout<<"inside child catch"<<endl;
    }catch(A e){
        cout<<"inside parent catch"<<endl;
    }
    cout<<"Ending prog"<<endl;
    return 0;
}
