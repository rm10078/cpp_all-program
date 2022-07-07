#include <iostream>
using namespace std;
int main(){
    int t,l,r,i,tt;
    cin>>t;
    while(t--){
        cin>>l>>r;
        tt=0;
        for(i=l;i<=r;i++){
           if(i%10==2 || i%10==3 || i%10==9){
               tt++;
           }
        }
        cout<<tt<<endl;
    }
    return 0;
}