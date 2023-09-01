#include<bits/stdc++.h>
using namespace std;

class INFO{
    public:
    string name;
    int num;
};

int main(){
    INFO arr[5] = {
        {"Abhishek",364},
        {"Harshit",-1},
        {"Yash",10},
        {"Mohit",0}
    };
    fstream fo;
    fo.open("info.if",ios::out | ios::binary);
    
    for(int i =0;i<5;i++){
        fo.write((char*)(arr+i),sizeof(INFO));
    }
    fo.close();
    INFO arr2[5];
    fo.open("info.if",ios::in | ios::binary);
    for(int i = 0;i<5;i++){
        fo.read((char*)(arr2+i),sizeof(INFO));
    }

    for(int i =0;i<5;i++){
        cout<<"Hi, i'm "<<arr2[i].name<<" i have "<<arr2[i].num<<" friends!!"<<endl;
    }
    // fo.write((char*)&obj,sizeof(INFO));
    // fo.close();
    // fo.open("info.if",ios::in | ios::binary);
    // INFO obj2;
    // fo.read((char*)&obj2,sizeof(INFO));
    // cout<<"HI , i'm "<<obj2.name<<" ,i have "<<obj2.num<<" friends"<<endl;
    return 0;
}
