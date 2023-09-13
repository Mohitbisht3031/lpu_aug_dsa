#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    Animal(){
        cout<<"In cons"<<endl;
    }
    void speak(){
        cout<<"Animal speaks"<<endl;
    }
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

class Cat : public Dog , public Animal{
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
    Cat c;
    // Dog d;
    // d.speak();
    // c.Animal::speak();
    return 0;
}
