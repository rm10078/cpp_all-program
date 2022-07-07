#include <iostream>
using namespace std;
int main(){
    int t,h,x,y,c;
    cin>>t;
    while(t--){
        cin>>h>>x>>y>>c;
        if((h*x)+y/2<=c){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}