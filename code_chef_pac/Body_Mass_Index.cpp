#include <iostream>
using namespace std;
int main(){
    int t,m,h;
    cin>>t;
    while(t--){
        cin>>m>>h;
        int bmi=m/(h*h);
        if(bmi<=18){
            cout<<1<<endl;
        }
        else if(bmi>18 && bmi<25){
            cout<<2<<endl;
        }
        else if(bmi>24 && bmi<30){
            cout<<3<<endl;
        }
        else if(bmi>=30){
            cout<<4<<endl;
        }

    }
    return 0;
}