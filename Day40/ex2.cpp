#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> planets = {"mercury","venus","earth","mars","jupiter","saturn","uranus","naptune"};
    
    vector<string>::iterator abhi = planets.begin();
    vector<string>::iterator lavi = planets.begin();
    // cout<<*(abhi)<<endl;
    // cout<<*lavi<<endl;
    // advance(abhi,3);
    // cout<<*abhi<<endl;
    // abhi = prev(abhi,1);
    // cout<<*abhi<<endl;
    // int d = distance(lavi,abhi);
    // lavi = next(lavi,d);
    // cout<<*lavi<<endl;
    
    // for(vector<string>::iterator i = planets.begin();i<planets.end();i++){
    //     cout<<*i<<" ";
    // }
    vector<string>::reverse_iterator i = planets.rbegin();
    // while(i > planets.rend()){
    //     cout<<*i<<" ";
    //     i--;
    // }
    for(;i<planets.rend();i++){
        cout<<*i<<endl;
    }
    return 0;
}
