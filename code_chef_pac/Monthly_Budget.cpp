#include <iostream>
using namespace std;
int main(){
    long int x,y;
    int t;
    cin>>t;
    while(t--){
        cin>>x>>y;
        if(y*30 > x){
            cout<<"NO"<<endl;
        }
        else if(y*30<=x){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}