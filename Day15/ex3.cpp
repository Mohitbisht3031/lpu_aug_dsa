#include<bits/stdc++.h>
using namespace std;

class Matrix{
    vector<vector<int>>v;
    public:
    // vector<vector<int>>v;
    void init(int size,int val){
        // method 1
        // vector<int>vec(size,val);
        // for(int i = 0;i<size;i++){
        //     v.push_back(vec);
        // }

        // method 2
        // v.resize(size,vector<int>(size,val));

        // method 3
        v = vector<vector<int>>(size,vector<int>(size,val));
    }

    void print(){
        for(int i = 0;i<v.size();i++){
            for(int j = 0;j<v[0].size();j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    } 

    void add(Matrix m){
        for(int i = 0;i<this->v.size();i++){
            for(int j = 0;j<this->v[0].size();j++){
                this->v[i][j]+=m.v[i][j];
            }
        }
    }  

};

class P{};

int main(){
    P p;
    Matrix m1;
    Matrix m2;
    m2.init(3,3);
    m1.init(3,2);

    m1.add(m2);

    m1.print();
    return 0;
}
