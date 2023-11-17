#include<bits/stdc++.h>
using namespace std;

// //  abstract class
// class Animal{
//     public:
//     virtual void speak() = 0;
// };


// class Dog : public Animal{
//     public:
//     void speak(){
//         cout<<"barks"<<endl;
//     }
// };

template <typename T1,typename T2>
class A{
    public: 
    T1 a;
    T2 b;
};

int main(){
    vector<int>v;
    A <int,int> a;
    // Animal*d = new Dog;
    // d->speak();
    // d->Animal::speak();
    // Animal*a = new Animal;
    // a->speak();
    return 0;
}
