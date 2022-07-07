#include <iostream>
using std::cout;
using std::endl;

class exm
{
public:
    void display(){             //display is a method
        cout<<"hello world"<<endl;
    }
};
int main()
{
    exm rajib;
    rajib.display();
    return 0;
}