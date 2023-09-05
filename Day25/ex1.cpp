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
    Complex c1(2,2);
    Complex c2(3,3);
    c1.print();
    c2.print();
    // Complex c3 = c1.add(c2);
    Complex c3 = c1+c2; // -> c1.+(c2)
    c3.print();

    Complex c4 = c1.multiply(c2);
    c4 .print();
    c4 = c1*c2;
    c4 .print();
    ++c4;
    c4.print();
    return 0;
}
