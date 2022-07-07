#include <iostream>
using std::cout;
using std::endl;

class exm
{
private:
    int v;
public:
    int get(){
        return v;
    }
    void set(int a){
        v=a;
    }
};
int main(){
    exm man;
    man.set(396);
    cout<<man.get()<<endl;
}