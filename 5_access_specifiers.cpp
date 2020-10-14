#include <iostream>
#include <string>
using namespace std;
class name
{
private:
    int a;  //this attribute access just in here
public:
    int b;
};

int main() {
 name obj;
   // obj.a=10;     //if this line is uncoment. program show error.
  //because in class you not access any private attribute 
    obj.b=20;
    cout<<"all ok";
return 0;
}