#include <iostream>
using namespace std;
class new_cl{   //base class
    public:
    void newcl(){           //function
        cout<<"this is new_cl class"<<endl;
        }
};
class old_cl{   //base class
public:
    void oldcl(){
        cout<<"this is old_cl class"<<endl;
    }
};
class mn_cl: public new_cl, public old_cl{      //two base in one child class
    public:
    void mncl(){
        cout<<"this is mn_cl class"<<endl;
    }
};
int main() {
mn_cl my_ob;
my_ob.mncl();
my_ob.newcl();
my_ob.oldcl();
return 0;
}