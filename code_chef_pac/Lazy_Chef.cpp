#include <iostream>
using namespace std;
int main(){
    int x,m,d,t;
    cin>>t;
    while(t--){
        cin>>x>>m>>d;
        int w=x*m,y=x+d;
        if(w>y){
            cout<<y<<endl;
        }
        else if(w<y){
            cout<<w<<endl;
        }
        else{
            cout<<w<<endl;
        }
    }
    return 0;
}