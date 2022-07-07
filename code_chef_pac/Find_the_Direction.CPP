#include <iostream>
using namespace std;
int main(){
    int t,x,loc;
    string f[4]={"NORTH","EAST","SOUTH","WEST"};
    cin>>t;
    while(t--){
        cin>>x;
        loc=x%4;
        cout<<f[loc]<<endl;
    }
    return 0;
}