#include <iostream>
using std::cout;
using std::endl;
using std::string;
class parent        //super class   parent class
{
public:
    string pname = "parent_name.";
    void display()
    {
        cout << "display fun in father class." << endl;
    }
};

class child : public parent             //sub class or child class
{
public:
    string cname="child_name";
};

int main()
{
    child rajib;
    cout<<rajib.pname<<endl;
    cout<<rajib.cname<<endl;
    rajib.display();

    return 0;
}