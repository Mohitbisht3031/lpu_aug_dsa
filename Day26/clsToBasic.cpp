#include<bits/stdc++.h>
using namespace std;

class Height{
    public:
    int feet;
    int inch;
    Height(int f,int i){
        this->feet = f;
        this->inch = i;
    }
    void diplay(){
        cout<<feet<<"feets"<<inch<<"inches"<<endl;
    }

    operator int(){
        return ((feet*12)+inch)*2.54;
    }

};

int main(){
    Height h(5,1);
    cout<<"heignt in cm is "<<(int)h<<endl;
    return 0;
}
