#include<bits/stdc++.h>
using namespace std;

inline int cube(int n){
    return n*n*n;
}

class Person{
    public:
    string name;
    int age;

    void init(string name,int age){
        cout<<this<<endl;
        this->name = name;
        this->age = age;
    }

    void intro(){
        cout<<"My name is "<<name<<" ,my age is "<<age<<endl;
    }

};

int main(){
    Person p1;
    Person p2;    
    // cout<<"Add of p1"<<&p1<<endl;
    // p1.init("Mohit",10);
    // p1.intro();

    // cout<<"Add of the p2 is"<<&p2<<endl;
    // p2.init("Abhishek",5);
    // p2.intro();

    cout<<cube(5)<<endl;

    return 0;
}
