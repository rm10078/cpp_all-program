#include <iostream>
using std::string;
using std::cout;
using std::endl;

class moblie{       //Mobile is a class 
public:     //name company price is a propaty
    string name;
    string company;
    
    int price;
};

int main(){
    moblie mi;          //now mi is object
    mi.name="Redmi power9";      //
    mi.price=10000;
    mi.company="MI";
    
    //For print all data

    cout<<"The mobile name :: ";
    cout<<mi.name<<endl;
    cout<<"The mobile price :: ";
    cout<<mi.price<<endl;
    cout<<"The mobil company :: ";
    cout<<mi.company<<endl;
    return 0;
}