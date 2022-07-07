#include <iostream>
using std::cout;
using std::endl;
using std::string;

class exm
{
private:
    int a;
    int b;
    string c;
public:
    exm(int x,int y,string z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display(){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;

    }
};

int main()
{
    exm man(34,56,"Ashik");
    man.display();
    
    return 0;
}