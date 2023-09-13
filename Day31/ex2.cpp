#include<bits/stdc++.h>
using namespace std;

// hybrid
class A{
    public:
    int a;
};
class B : public virtual A{
};
class C :virtual public A{
};
class D : public B, public C{

};

int main(){ 
    D obj;
    // method 1 without using virtual
    // obj.B::a = 10;
    // obj.C::a = 100;

    // Method 2 using virtual keyword
    obj.a = 100;
    cout<<obj.a<<endl;
    return 0;
}
