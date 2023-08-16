#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    char n;
    int age;
    Person*ptr;

    void init(char name,int a){
        n = name;
        age = a;
    }
    void intro(){
        cout<<"Hey my name is "<<n<<" my age is "<<age<<endl;
    }
};

int main(){
    Person p;
    p.init('M',10);
    p.intro();

    Person* ptr = &p;
    ptr->n = 'A';
    ptr->intro();

    (*ptr).age = 11;
    (*ptr).intro();

    return 0;
}
