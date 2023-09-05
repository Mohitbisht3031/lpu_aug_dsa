#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real;
    int img;
    public:

    Complex(int real,int img) : real(real),img(img){}

    void print(){
        cout<<real<<"+i"<<img<<endl;
    }

    Complex add(Complex c){
        int r = this->real+c.real;
        int i = this->img+c.img;
        return Complex(r,i);
    }

    Complex operator +(Complex c){
        int r = this->real+c.real;
        int i = this->img+c.img;
        return Complex(r,i);
    }

    Complex multiply(Complex c){
        return Complex(((this->real*c.real)- (this->img*c.img)) , ((this->real*c.img)+(this->img*c.real)));
    }

    Complex operator *(Complex c){
        return Complex(((this->real*c.real)- (this->img*c.img)) , ((this->real*c.img)+(this->img*c.real)));
    }

    void operator ++(){
        this->real++;
        return;
    }


};

int main(){
    unordered_map<string,int>mp;
    mp["Mohit"] = 0;
    mp["Abhishek"] = 364;
    mp["Harshit"] = 1;

    cout<<mp["Abhishek"]<<" "<<mp["Mohit"]<<" "<<mp["Harshit"]<<endl;
    if(mp.count("Mohit")){
        cout<<"Yes it is there!!"<<endl;
    }
    if(mp.count("geetika") == 0){
        cout<<"it there there!!!"<<endl;
    }
    return 0;
}
