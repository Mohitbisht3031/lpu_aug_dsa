#include<bits/stdc++.h>
using namespace std;
int main(){
    ofstream ofo;
    ofo.open("abhishek.don");
    ofo<<"Hi ,I'm abhishek DONNNNNNNNNNNNNNNN!!";
    ofo.close();
    ifstream ifo;
    ifo.open("abhishek.don"); 
    string s;
    // ifo>>s;
    getline(ifo,s);
    ifo.close();
    cout<<s<<endl;
    return 0;
}
