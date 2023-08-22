#include<bits/stdc++.h>
using namespace std;

struct Person
{
    string name;
    int age;
};

union Person1
{
    float b;
    int age;
};


int main(){
    struct Person p1 = {"Mohit",10};
    union Person1 p2 = {1.1};
    cout<<p1.name<<" "<<p1.age<<endl;
    cout<<p2.b<<" "<<p2.age<<endl;
    return 0;
}
