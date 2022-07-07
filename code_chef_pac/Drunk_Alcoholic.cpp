#include <iostream>
using namespace std;
int main(){
    int t,k,r,i,temp;
    cin>>t;
    while(t--){
        cin>>k;
        r=0;
        for ( i = 1; i <=k; i++)
        {
            if(i%2>0){
                r +=3;
            }
            else if(i%2 == 0){
                r -=1;
            }
        }
        if(k==0){
            cout<<k<<endl;
        }
        else{
            cout<<r<<endl;
        }
        
    }
    return 0;
}