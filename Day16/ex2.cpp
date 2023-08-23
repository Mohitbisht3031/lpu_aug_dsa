#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;

// default contructor
    Person(){
        cout<<"In the const."<<endl;
    }
// parametrize const.
    Person(string name){
        cout<<"In one parameter const."<<endl;
        this->name = name;
    }

    // Person(string name, int age){
    //     cout<<"In two parameter const."<<endl;
    //     this->name = name;
    //     this->age = age;
    // }

// initializer list
    Person(string n,int a) : name(n),age(a){
    }


// copy cont
    Person(Person&p){
        this->name = p.name;
        this->age = p.age;
    }

    // void init(string name,int age){
    //     this->name = name;
    //     this->age = age;
    // }
    
    void intro(){
        cout<<"My name is "<<name<<" , my age is "<<age<<endl;
    }

    ~Person(){
        cout<<"in the destructor"<<endl;
    }
};

// void fun(){
//     cout<<"Inside the fun"<<endl;
//     Person *p = new Person;
//     delete p;
//     cout<<"At the end of fun"<<endl;
//     return;
// }

int main(){
    // cout<<""
    Person* p = new Person;

    // fun();
    // Person p;
    // Person p1("Mohit");
    // Person p2("Mohit",10);
    // // p.init("Mohit",10);
    // p = p2; //default copy is getting invoked
    // // p.intro();
    // // p1.intro();
    // // p2.intro();
    return 0;
}
