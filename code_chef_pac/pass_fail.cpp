#include <iostream>
using namespace std;
int main(){
    int N,X,P,T=0,tem0,tem1;
    cout<<"Enter test case : ";
    cin>>T;
    while(T--){
    cin>>N>>X>>P;
    if((X*3)-((N-X)*1) >=P){
        cout<<"PASS\n";
    }
    else{
        cout<<"FAIL\n";
    }
    }
    return 0;
}