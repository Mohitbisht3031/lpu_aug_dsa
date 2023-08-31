#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream ifo;
    ifo.open("abhishek.stud"); 
    string s;
    // ifo>>s;
    getline(ifo,s);
    ifo.close();
    cout<<s<<endl;
    // int n;
    // ifo>>n;
    // for(int i= 0;i<n;i++){
    //     string s;
    //     int num;
    //     int year;
    //     ifo>>s>>year>>num;
    //     cout<<"HI my name is "<<s<<" in year "<<year<<" i had "<<num<<" FRIENDS!!"<<endl;
    // }  
    return 0;
}
