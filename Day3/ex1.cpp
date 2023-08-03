#include<bits/stdc++.h>
using namespace std;

int main(){
    int mt,at;
    cin>>mt>>at;

    // int used = 0;
    int ans = 0;
    // way 1
    // while(mt){
    //     ans+=10;
    //     mt--;
    //     used++;
    //     if(used%5 == 0 && at > 0){
    //         mt++;
    //         at--;
    //     }
    // }

    for(int i = 1;i<=mt;i++){
        ans+=10;
        mt--;
        if(i%5 == 0 && at > 0){
            mt++;
            at--;
        }
    }

    cout<<"maximum distance covered is "<<ans<<endl;

    return 0;
}
