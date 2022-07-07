#include <iostream>
using namespace std;
int main(){
    int t,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        if (x<y && y!=x)
        {
            cout<<"FIRST"<<endl;
        }
        else if(x>y && y!=x){
            cout<<"SECOND"<<endl;
        }
        else if (x==y)
        {
            cout<<"ANY"<<endl;
        }
        
    }
    return 0;
}   