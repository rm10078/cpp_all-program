#include <iostream>
#include <string>
using namespace std;
class books
{
private:
    string name;
    string aut;
public:
    void setbook(string a,string b){    //this void function for add book name and aut
        name=a;
        aut=b;
    }
    string printbooks(string a){
        if (a=="name")
        {
            return name;
        }
        if (a=="aut")
        {
            return aut;
        }
        return "error";  //if you ignor this return function code get warning
        //if two if condition is false then return this error string
        
    }

};
int main() {
books mybook;
mybook.setbook("digital electronic","j.c das");
cout<<"book name is :"<<mybook.printbooks("name")<<endl;
cout<<"book aut :"<<mybook.printbooks("aut")<<endl;
return 0;
}