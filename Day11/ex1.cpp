#include<bits/stdc++.h>
using namespace std;

void add(int&b){
    b++;
    return;
}

int main(){
    int a = 10;
    add(a);
    cout<<a<<endl;
    // int* ptr = &a;
    // cout<<ptr<<" "<<&a<<endl;
    // cout<<*ptr<<endl;

    // int** ptr2 = &ptr;

    char ch = 'A';
    // char*pc = &ch;

    // if(sizeof(ptr) == sizeof(pc)){
    //     cout<<"Same"<<endl;
    // }else cout<<"Not same"<<endl;

    // difference b/w reference and pointer
    // referance is diff name of the same varibale
    // int abhishek = 10;
    // int&bharti = abhishek;


    // int arr[] = {0,1,2,3};

    // cout<<arr<<" "<<&arr[0]<<endl;
    // cout<<arr[0]<<" "<<*(arr+0)<<endl;
    // cout<<arr[2]<<" "<<*(arr+2)<<endl;

    // wild pointer
    int*ptr;
    cout<<ptr<<endl;
    cout<<ptr+1<<endl;
    cout<<ptr+2<<endl;
    
    return 0;
}
