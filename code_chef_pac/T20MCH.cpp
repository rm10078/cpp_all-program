#include <iostream>
using namespace std;
int main(){
    int r,o,c;
        cin>>r>>o>>c;
        int run = (20-o)*36;
        if(r>run+c){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    
    return 0;
}