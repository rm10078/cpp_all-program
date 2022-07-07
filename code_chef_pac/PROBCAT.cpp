#include <iostream>
using namespace std;
int main(){
    int t,x;
    cin>>t;
    while(t--){
        cin>>x;
        if(1<=x && 100>x){
            cout<<"EASY"<<endl;
        }
        else if(100<=x && 200>x){
            cout<<"MEDIUM"<<endl;
        }
        else if(200<=x && 300>=x){
            cout<<"HARD"<<endl;
        }
    }
    return 0;
}