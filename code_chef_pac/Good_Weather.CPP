#include <iostream>
using namespace std;
int main(){
    int a[7],t;
    cin>>t;
    while(t--){
        cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6];
        if(a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6] > 3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}