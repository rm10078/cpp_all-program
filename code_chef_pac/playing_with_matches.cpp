#include <iostream>
#include <sstream>

using namespace std;
int main(){
    int segment[10]={6,2,5,5,4,5,6,3,7,6},t=0,a=0,b=0;   
    cin>>t;
    while (t--)
    {
       cin>>a>>b;
        int tem=a+b,temm=0;
        string str=to_string(tem);
        for(int i=0;i<str.length();i++){
            int tem0=0;
            stringstream ss;
            ss<<str[i];
            ss>>tem0;
            temm +=segment[tem0];
        }
        cout<<temm<<endl;
    }
    
    return 0;
}