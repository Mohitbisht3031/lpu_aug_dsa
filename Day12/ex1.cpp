#include<bits/stdc++.h>
using namespace std;

int main(){
    char arr[] = {'M','o','H','i','T','\0'};
    
    // cout<<arr<<endl;
    // cout<<arr+1<<endl;

    string str = "Mohit";
    cout<<str<<endl;
    cout<<"String size is "<<str.size()<<endl;
    reverse(str.begin(),str.end());
    cout<<"reverse of the string is "<<str<<endl;
    str.append("Mohit");
    str.append("M");
    cout<<str<<endl;
    cout<<str.find('M')<<endl;
    return 0;
}
