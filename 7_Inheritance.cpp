#include <iostream>
#include <string>
using namespace std;
//parent class smart_device
class smart_device{
public:
    string model;
    string company;
    float cpu;
    int ram;
    int battery;
};
//child class smart_phone
class smart_phone: public smart_device {
public:
    string display;
    int camera;
    int storage;
    int ex_storage; 
};
//child class smart_band
class smart_band: public smart_device{
public:
    string sensor;
    string display;
    string band;
};
int main() {
smart_phone mi;     //smart_phone is a child class object.
mi.cpu=1.2;
mi.ram=4;
mi.battery=3000;
mi.camera=16;
mi.company="redmi";
mi.model="100b";
mi.display="4k";
mi.storage=64;
mi.ex_storage=128;
smart_band honor;   //smart_band is a child class object.
honor.band="rabbar";
honor.battery=300;
honor.cpu=160;
honor.company="honor";
honor.model="band 5";
honor.ram=16;
honor.display="Oled";
honor.sensor="pd,Bo2,bp,h";
//print result
cout<<"smart phone\n";
cout<<"compane="<<mi.company<<"\nmodel="<<mi.model<<"\nbattery="<<mi.battery<<"\ncpu="<<mi.cpu<<"\nstorage="<<mi.storage<<endl;
cout<<"smart band\n";
cout<<"compane="<<honor.company<<"\nmodel="<<honor.model<<"\nbattery="<<honor.battery<<"\ncpu="<<honor.cpu<<"\nsensor="<<honor.sensor<<endl;
return 0;
}