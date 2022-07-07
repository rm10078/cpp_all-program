#include <iostream>
using std::cout;
using std::endl;
using std::string;

class grandfather{
public:
    void display(){
        cout<<"grandfather_class"<<endl;
    }
};
class father : public grandfather{
public:
    void display(){
        cout<<"father_class"<<endl;
    }
};
class son : public father{
public:
    void display(){
        cout<<"son_class"<<endl;
    }
};
int main(){
    grandfather gf;
    gf.display();
    father f;
    f.display();
    son s;
    s.display();
    return 0;
}