#include <iostream>
using namespace std;
int main(){
    string str = "Souvik is good student";
    std::string::iterator sit;
    std::string::iterator eit;
    std::string::reverse_iterator ait;
    std::string::reverse_iterator bit;


    sit = str.begin();
    eit = str.end();
    ait = str.rbegin();
    bit = str.rend();
    cout<<*eit<<endl;
    cout<<*sit<<endl;
    cout<<*ait<<endl;
    cout<<*bit<<endl;
    return 0;
}