#include <iostream>
using namespace std;
namespace np1
{
    int a=30;
    int b=10;
    string c="Rajib";
}

namespace np2
{
    int a=99;
    int b=70;
    string c="Subrata";   
}


int main(){
    cout<<"namespace np1 data --"<<endl;
    cout<<np1::a<<endl;
    cout<<np1::b<<endl;
    cout<<np1::c<<endl;

    cout<<"namespace np2 data --"<<endl;
    cout<<np2::a<<endl;
    cout<<np2::b<<endl;
    cout<<np2::c<<endl;
    

    return 0;
}