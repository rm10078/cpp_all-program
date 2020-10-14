#include <iostream>
#include <string>
using namespace std;
class battery{  //parent
    public:
        int capacity;
};
class lithiam: public battery{     //child
    public:
        int max_volt;
        int max_current;
};
class achid: public battery{        //child
    public:
        int max_volt;
        int max_current;
};
class li_po: public lithiam{   //grandchild
    public:
        int whidth;
        int height;
        int weight;
}; 
class li_in: public lithiam{    //grandchild
    public:
        int whidth;
        int height;
        int weight;
}; 
int main() {

li_po bt1;  //object
bt1.capacity=2500;
bt1.max_volt=4.2;
bt1.max_current=1;
bt1.weight=100;
bt1.height=13;
bt1.weight=7;
li_in bt2;      //object
bt2.capacity=1280;
bt2.max_volt=4.2;
bt2.max_current=700;
bt2.height=7;
bt2.whidth=2;
bt2.weight=170;
//print result 
cout<<"li_po"<<endl;
cout<<"capacity="<<bt1.capacity<<"\nmax voltage="<<bt1.max_volt<<"\nmax current="<<bt1.max_current<<"\nweight="<<bt1.weight<<"\nHeight="<<bt1.height<<"\nWidth="<<bt1.whidth<<endl;
cout<<"li_in"<<endl;
cout<<"capacity="<<bt2.capacity<<"\nmax voltage="<<bt2.max_volt<<"\nmax current="<<bt2.max_current<<"\nweight="<<bt2.weight<<"\nHeight="<<bt2.height<<"\nWidth="<<bt2.whidth<<endl;
return 0;
}