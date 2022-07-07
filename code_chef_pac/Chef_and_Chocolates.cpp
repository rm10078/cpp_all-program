#include <iostream>
using namespace std;
int main(){
    int t,x,y,c;
    cin>>t;
    while(t--){
        cin>>c>>x>>y;
        cout<<((c-x)*y);
    }
    return 0;
}