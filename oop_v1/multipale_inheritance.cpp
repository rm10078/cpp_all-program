#include <iostream>
using std::cout;
using std::endl;
using std::string;

class father{
public:
    string fname="father_name";
};
class mother{
public:
    string mname="mother_name";
};

class son : public father, public mother{
public:
    void display(){
        cout<<"hello world"<<endl;
    }
};

int main(){
    son rajib;
    cout<<rajib.fname<<endl;
    cout<<rajib.mname<<endl;
    rajib.display();
    return 0;
}