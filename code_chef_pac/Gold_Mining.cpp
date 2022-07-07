#include<iostream>
using namespace std;
int main(){
    int t,n,x,y;
    cin>>t;
    while(t--){
        cin>>n>>x>>y;
        if(x<=(y*(n+1))){
            cout<<"YES"<<endl;
        }
        else if(x>(y*(n+1))){
            cout<<"NO"<<endl;
        }
    }
}