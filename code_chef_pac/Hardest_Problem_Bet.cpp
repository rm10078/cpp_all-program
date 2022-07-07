#include <iostream>
using namespace std;
int main(){
    int a,b,c,t;
    cin>>t;
    while(t--){
    cin>>a>>b>>c;
    if(c<a && c<b){
        cout<<"Alice"<<endl;
    }
    else if(b<a && b<c){
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Draw"<<endl;
    }
    }
    return 0;
}