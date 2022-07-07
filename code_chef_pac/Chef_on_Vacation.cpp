#include <iostream>
using namespace std;
int main(){
    int t,x,y,z;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        if((x+y)<=z){
            cout<<"YES"<<endl;
        }
        else if((x+y)>z){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}