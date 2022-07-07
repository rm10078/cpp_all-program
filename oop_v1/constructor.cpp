#include <iostream>
using std::cout;
using std::endl;
using std::string;

class myclass
{
public:
    myclass(int a,int b,string c){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
};

int main()
{
    myclass man(30,50,"Rajib manna");
    return 0;
}