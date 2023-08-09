#include<bits/stdc++.h>
using namespace std;

class Person{
    
    char ch;
    int age;
    int bankBalance; 

    public: 
    void init(char c,int a,int bb){
        ch = c;
        age = a;
        bankBalance = bb;
    }  

    void print(){
        cout<<ch<<" "<<age<<" "<<bankBalance<<endl;
    }

};

int main(){
    Person p;
    // cout<<p.ch<<" "<<p.age<<" "<<p.bankBalance<<endl;
    p.print();
    p.init('M',10,100);
    p.print();
    // cout<<p.ch<<" "<<p.age<<" "<<p.bankBalance<<endl;
    return 0;
}
