#include<bits/stdc++.h>
using namespace std;

// static bool cmp(D obj1,D obj2){
//     return obj1.p <= obj2.p;
// }

// void printTop2(vector<string>name,vector<int>p){
//     priority_queue<pair<int,string>,vector<pair<int,string>>,greater<pair<int,string>>>pq;
//     // vector<pair<int,string>>v;
//     // // vector<pair<string,int>>v;
//     for(int i = 0;i<name.size();i++){
//         // pair<int,string> p = {p[i],name[i]};
//         // v.push_back({p[i],name[i]});
//         // v.push_back({name[i],p[i]});
//         pq.push({p[i],name[i]});
//     }

//     while(!pq.empty()){
//         cout<<pq.top().first<<"-"<<pq.top().second<<endl;
//         pq.pop();
//     }
//     // sort(v.begin(),v.end());

//     // // for(int i = 0;i<v.size();i++){
//     // //     cout<<v[i].first<<" "<<v[i].second<<endl;
//     // // }


//     // cout<<v[0].second<<"-"<<v[0].first<<endl;
//     // cout<<v[1].second<<"-"<<v[1].first<<endl;
//     return;
// }

// k-> no of top priority i want . k == 2
class D{
    public:
    string name;
    int pr;
    D(string name ,int pr) : name(name) , pr(pr){}
    // static bool cmp(D obj1,D obj2){
    //     if(obj1.pr >= obj2.pr)return 1;
    //     return 0;
    // }
};
class cmp{
    public:
    bool operator() (D obj1,D obj2){
        return obj1.pr >= obj2.pr; 
    }
};


void printTop2(vector<string>name,vector<int>p){
    priority_queue<D,vector<D>,cmp>pq;
    for(int i = 0;i<name.size();i++){
        D obj(name[i],p[i]);
        if(pq.size() < 2){
            // D obj(name[i],p[i]);
            pq.push(obj);
            // pq.push({p[i],name[i]});
        }else{
            if(pq.top().pr > p[i]){
                pq.pop();
                pq.push(obj);
            }
        }
    }

    while(!pq.empty()){
        cout<<pq.top().name<<"-"<<pq.top().pr<<endl;
        pq.pop();
    }

    // cout<<pq.top().second<<"-"<<pq.top().first<<endl;
    // pq.pop();
    // cout<<pq.top().second<<"-"<<pq.top().first<<endl;
    return;
}

int main(){ 
    printTop2({"X","Z","A","D","E"},{1,3,2,2,5});
    return 0;
}
