#include <iostream>
using namespace std;
int main(){
    string str="Suvodip is a good boy.";
    cout<<"Your string is = "<<str<<endl;
    cout<<"Your string length = "<<str.length()<<endl;
    cout<<"Your string capacity = "<<str.capacity()<<endl;
    str.shrink_to_fit();    
    cout<<"After shrink_to_fit = "<<str.length()<<endl;
    str.resize(7);
    cout<<"After resize the string := "<<str<<endl;
    cout<<"Your string length = "<<str.length()<<endl;
    return 0;
}