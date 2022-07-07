#include <iostream>
using std::cout;
using std::endl;

class exm
{
public:
    void display();
};

void exm::display(){
    cout<<"Hello world"<<endl;
}

int main()
{
    exm man;
    man.display();
    return 0;
}