#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;
    const static int classSize = 10;
// paramterize const
    Person(string name,int age){
        this->age = age;
        this->name = name;
    }

    // using initilizer list
    // Person(string name,int age) : name(name),age(age){
    // }

};

int main(){
    cout<<"size of the class is "<<Person::classSize<<endl;
    return 0;
}
