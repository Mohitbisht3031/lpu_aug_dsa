#include<bits/stdc++.h>
using namespace std;

// single
class A{};
class B : public A{};

//multiple 
class A{};
class B {};
class C : public A, public B{};

// multi level
class A{};
class B : public A{};
class C : public B{};

// hierarchical
class A{};
class B:public A{};
class C:public A{};

// hybrid
class A{};
class B : public A{};
class C : public A{};
class D : public B, public C{};

int main(){
    return 0;
}
