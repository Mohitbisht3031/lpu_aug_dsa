#include<bits/stdc++.h>
using namespace std;

class SeatManager {
public:
set<int>s;
    SeatManager(int n) {
        for(int i = 1;i<=n;i++)s.insert(i);
    }
    
    int reserve() {
        int val = *s.begin();
        s.erase(val);
        return val;
    }
    
    void unreserve(int seatNumber) {
        s.insert(seatNumber);
    }

};
int main(){
    return 0;
}
