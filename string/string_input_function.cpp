#include <iostream>
using namespace std;
int main(){
    string str;
    cout<<"Type your string:=  ";
    getline(cin,str);   //for get a string
    cout<<str<<endl;
    str.push_back('g');
    cout<<"After adding g."<<str<<endl;
    str.pop_back(); //for remove last char
    cout<<"After removing g. "<<str<<endl;
    cout<<str.capacity()<<endl;
    return 0;
}