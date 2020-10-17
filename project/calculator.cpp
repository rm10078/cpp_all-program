#include <iostream>
using namespace std;
int main() {
long double num1;
long double num2;
long double result;
char op;
int rep=1;
int pp=0;
while (rep==1)
{
    
    cout<<"Type your opration ="<<endl;
    cin>>op;
    if (pp==1)
    {
        num1=result;
    }
    else
    {
        cout<<"Type first number ="<<endl;
        cin>>num1;
    }
    
    cout<<"type second number valu"<<endl;
    cin>>num2;

    switch (op)
    {
    case '+':
        result=num1+num2;
        break;
    case '-':
        result=num1-num2;
        break;
    case '*':
        result=num1*num2;
        break;
    case '/':
        result=num1/num2;
        break;
    default:
        cout<<"error";
        break;
    }
    cout<<num1<< op <<num2 <<"="<<result<<endl;

    cout<<"continu ?\n1.for YES    0.for NO"<<endl;
    cin>>rep;

    if (rep==1)
    {
        cout<<"you want to use result ?\n1.for YES   2.for NO"<<endl;
        cin>>pp;
    }
    else
    {
        cout<<"Thanks for useing"<<endl;
    }
    
    
    
}

return 0;
}