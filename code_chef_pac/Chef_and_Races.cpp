#include <iostream>
using namespace std;
int main(){
    int t,x,y,a,b;
    cin>>t;
    while(t--){
        cin>>x>>y>>a>>b;
        if((x==a || x==b) && (y==a || y==b)){
            cout<<0<<endl;
        }
        else if((x==a || x==b) && (y!=a || y!=b)){
            cout<<1<<endl;
        }
        else if((x!=a || x!=b) && (y==a || y==b)){
            cout<<1<<endl;
        }
        else if((x!=a && x!=b) && (y!=a && y!=b)){
            cout<<2<<endl;
        }
    }
    return 0;
}