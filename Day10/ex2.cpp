#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    char name;
    int age;
    static const int batch = 10;
    private:
    int no_of_FRIENDS;

    public:
    void init(char l,int a,int no){
        name = l;
        age = a;
        no_of_FRIENDS = no;
    }

    void intro(){
        cout<<"My name is "<<name<<" ,my age is "<<age<<endl;
    }
    friend void bestFriend(Person p);
    friend class BFF;
};

class BFF{};

void bestFriend(Person p){
    cout<<"Hey "<<p.name<<" have "<<p.no_of_FRIENDS<<" FRIENDS"<<endl;
}

int main(){

    // Person::batch = 10;
    cout<<Person::batch<<endl;
    // Person p;
    // p.init('A',20,365);
    // p.intro();

    // bestFriend(p);

    return 0;
}
