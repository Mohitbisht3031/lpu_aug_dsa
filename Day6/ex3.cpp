#include<bits/stdc++.h>
using namespace std;

// pass by value
// void roundOFf(int PA){ //Formal parameter
//     PA++;
//     return;
// }

// call by reference
void roundOFf(int&PA){
    PA++;
    return;
}

int main(){
    int PA = 5; //Actual parameter
    // cin>>PA; //
    roundOFf(PA);
    cout<<PA<<endl;
    return 0;
}
