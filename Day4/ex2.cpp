#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int freq[] = {0,0,0,0,0,0,0,0,0,0};
    bool ans = 1;
    for(int i = 1;i<=3;i++){
        int newN = i*n;

        while(newN){
            int d = newN%10;
            newN/=10;
            if(freq[d] > 0){
                ans = 0;
                break;
            }
            freq[d]++;
        }
        if(ans == 0)break;
    }

    for(int i = 1;i<10;i++){
        if(freq[i] == 0)ans = 0;
    }

    if(ans){
        cout<<"Given number is fasinating"<<endl;
    }else cout<<"Given number is not fasinating"<<endl;

    return 0;
}
