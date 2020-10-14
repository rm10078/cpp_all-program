/*-The third specifier, protected,
 is similar to private, 
 but it can also be accessed in the inherited class*/
 
#include <iostream>
using namespace std;
class mycl{
    protected:  //this 
        int price;
};
class myscl: public mycl{
    public:
        void add(int a){
            price=a;
        }
        void print(){
            cout<<"the price is "<<price<<endl;
        }
};
int main() {
int p=780;
myscl myob;
myob.add(p);
myob.print();
return 0;
}