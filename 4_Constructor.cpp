#include <iostream>
#include <string>
using namespace std;
class flower        //flower is a class 
{
public:       //access permison
    string name;  //attribute
    string colour; //attribute
    int price;     //attribute
    flower(string a,string b,int c){    //constructor with parameter
    name=a;
    colour=b;
    price=c;
}

};
int main() {
    //create a object and call constructor with different value
    flower rose("rose","red",5);  //rose is a object
    flower suflower("Sunflower","Yellow",10);  //sunflower is a object
    //print output
    cout<<"Flower name is "<<rose.name<<" and colour is "<<rose.colour<<" and price is "<<rose.price<<"."<<endl;
    cout<<"Flower name is "<<suflower.name<<" and colour is "<<suflower.colour<<" and price is "<<suflower.price<<"."<<endl;
return 0;
}