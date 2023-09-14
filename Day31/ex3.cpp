#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    Animal(){
        cout<<"In cons"<<endl;
    }
    // virtual void speak(){
    //     cout<<"Animal speaks"<<endl;
    // }
    virtual void speak() = 0;
    ~Animal(){
        cout<<"In Des"<<endl;
    }
};

class Dog {
    public:
    Dog(){
        cout<<"In Dog's const"<<endl;
    }
    void speak(){
        cout<<"Barks"<<endl;
    }
    ~Dog(){
        cout<<"In dog's des"<<endl;
    }
};

class Cat : public Animal{
    public:
    Cat(){
        cout<<"in cat's cons"<<endl;
    }
    void speak(){
        cout<<"Meaowww "<<endl;
    }
    ~Cat(){
        cout<<"In cat's des"<<endl;
    }
};

int main(){ 
    Animal *obj = new Cat();
    obj->speak();
    return 0;
}
