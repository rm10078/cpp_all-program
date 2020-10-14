#include <iostream>
#include <string>  //this is for accept string
using namespace std;
class new_class{    //declear class
public:     //type is public
    string name;
    int roll;
};
int main() {
new_class eie;   //make a object use class
eie.name ="Rajib Manna";  //set the variable in eie object
eie.roll =30;

cout<<eie.name<<endl;   //print the all result
cout<<eie.roll;
return 0;
}