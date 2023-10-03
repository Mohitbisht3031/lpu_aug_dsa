#include<bits/stdc++.h>
using namespace std;

template <typename T>
T Max(T a,T b){
    return (a >= b ? a : b);
}

template <typename T1,typename T2>
class Special{
    T1 a;
    T2 b;
    public:
    Special(T1 a,T2 b) : a(a),b(b){}
    T1 sub(){
        return b-a;
    }

    T2 divide(){
        return b/a;
    }
};

int main(){ 
    cout<<Max<int>(5,10)<<endl;
    cout<<Max<double>(5.889,10.999)<<endl;
    
    Special<double,int>o1(2.5,5);
    Special<int,double>o1(2,5.5);
    
    return 0;
}
