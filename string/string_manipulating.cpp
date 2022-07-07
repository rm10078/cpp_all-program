#include <iostream>
using namespace std;
int main(){
    string s1="Souvik is a MIT passout.";
    string s2="Rahul is a HIT student.";
    char c[15];
    s1.copy(c,9,0);
    cout<<"Your copy text = "<<c<<endl;
    cout<<"The s1 string = "<<s1<<endl;
    cout<<"The s2 string = "<<s2<<endl;
    s1.swap(s2);
    cout<<"after swap."<<endl;
    cout<<"The s1 string = "<<s1<<endl;
    cout<<"The s2 string = "<<s2<<endl;

    return 0;
}