#include<bits/stdc++.h>
using namespace std;

    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        priority_queue<double,vector<double>,greater<double>>pq;
        for(int i = 0;i<dist.size();i++){
            pq.push(((double)dist[i]/speed[i]));
        }

        int t = 1;
        int c = 1;

        while(!pq.empty()){
            double top = pq.top();
            pq.pop();
            if(top <= t)break;
            c++;
            t++;
        }
        return c;
    }

int main(){
    return 0;
}
