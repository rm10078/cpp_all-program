#include <iostream>
using namespace std;
int main(){
    int t,ga,sa,ba,gb,sb,bb;
    cin>>t;
    while(t--){
        cin>>ga>>sa>>ba>>gb>>sb>>bb;
        if((ga+sa+ba)>(gb+sb+bb)){
            cout<<1<<endl;
        }
        else if((ga+sa+ba)<(gb+sb+bb)){
            cout<<2<<endl;
        }
    }
    return 0;
}