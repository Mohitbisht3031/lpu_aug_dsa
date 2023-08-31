#include<bits/stdc++.h>
using namespace std;
int main(){
    fstream fo;
    fo.open("abhishek.don",ios::out);
    // fo<<"sabka badla lega tera ye abishek.!!";
    fo<<"Humko janti ho ? Gungi ho?";
    fo.close();

    fo.open("abhishek.don",ios::in);
    string s;
    // fo>>s;
    fo.seekg(8,ios_base::end);
    getline(fo,s);
    fo.close();
    cout<<s<<endl;
    return 0;
}
