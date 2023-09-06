#include<bits/stdc++.h>
using namespace std;

class Time{
    public:
    int h;
    int m;
    // Time(){
    // }
    // Time(int t){
    //     h = t/60;
    //     m = t%60;
    // }
    void display(){
        cout<<"it's "<<h<<":"<<m<<" from the middle of the night!!"<<endl;
    }

    void operator =(int t){
        h = t/60;
        m = t%60;
    }

};

int main(){
    int t = 330;
    Time T;
    T = t;
    // Time T(t);
    T.display();
    return 0;
}
