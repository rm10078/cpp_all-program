#include <iostream>
using std::cout;
using std::endl;
using std::string;

class grandfather
{
public:
    string gfname="grandfather_name";
};

class father : public grandfather{
public:
    string fname="father_name";
};

class son : public father{
public:
    void display(){
        cout<<"hello world"<<endl;
    }
};

int main()
{
    son rajib;
    cout<<rajib.gfname<<endl;
    cout<<rajib.fname<<endl;
    rajib.display();
    return 0;
}