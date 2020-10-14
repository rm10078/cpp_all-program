#include <iostream>
using namespace std;
int main() {
int your_age=20;
try
{
    if(your_age<18){
        cout<<"ok";
    }
    else{
        throw 404;
    }
}
catch(int m)
{
    cout<<m;
}

return 0;
}