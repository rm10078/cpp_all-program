#include <iostream>
using namespace std;
int main(){
    int t,m,n,k;
    cin>>t;
    while(t--){
        cin>>m>>n>>k;
        if(m>n*k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}