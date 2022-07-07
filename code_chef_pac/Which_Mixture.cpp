#include <iostream>
using namespace std;
int main(){
    int a,b,t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a>0 && b>0){
            cout<<"Solution"<<endl;
        }
        else if(b>0 && a==0){
            cout<<"Lequid"<<endl;
        }
        else if(a>0 && b==0){
            cout<<"Solid"<<endl;
        }
    }
    return 0;
}