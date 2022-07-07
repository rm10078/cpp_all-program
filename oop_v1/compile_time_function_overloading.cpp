#include <iostream>
using std::cout;
using std::endl;
using std::string;

void fun(){
    cout<<"hello world"<<endl;
}

void fun(int a){
    cout<<"your value = ";
    cout<<a<<endl;
}
void fun(int a,int b){
    int c=a+b;
    cout<<"add number = ";
    cout<<c<<endl;
}
int main(){
    fun();
    fun(99);
    fun(40,60);
    return 0;
}