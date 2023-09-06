#include<bits/stdc++.h>
using namespace std;

class Imperial{
    public:
    int km;
    int m;
    Imperial(int km,int m) : km(km), m(m){}
    void display(){
        cout<<km<<","<<m<<endl;
    }
};

class Metric{
    public:
    int miles;
    int foot;
    Metric(int m,int f) : miles(m),foot(f){}
    Metric(Imperial obj){
        this->miles = obj.km/1.6;
        this->foot = obj.m/0.3048;
    }
    void display(){
        cout<<miles<<","<<foot<<endl;
    }

    operator Imperial(){
        return Imperial(miles*1.6 , foot*0.3048);
    }

};

int main(){
    Metric m(5,5);
    Imperial i = (Imperial)m;
    i.display();

    m = i;
    m.display();
    return 0;
}
