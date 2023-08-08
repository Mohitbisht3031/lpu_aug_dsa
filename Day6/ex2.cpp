#include<bits/stdc++.h>
using namespace std;

int roundOFf(int PA){
    int fd = (100-PA)/10;
    int sd = (100-PA)%10;

    if(sd >= 6)fd++;

    return fd*10;
}

int main(){
    int PA;
    cin>>PA;

    cout<<"Remaining balance is  : "<<roundOFf(PA)<<endl;
    
    return 0;
}
