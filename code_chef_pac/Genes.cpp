#include <iostream>
using namespace std;
int main(){
    char a,b;
    cin>>a>>b;
    if(a==b){
        cout<<a<<endl;
    }
    else if(a=='R' && b=='G'){
        cout<<"R"<<endl;
    }
    else if(a=='G' && b=='R'){
        cout<<"R"<<endl;
    }


    else if(a=='B' && b=='G'){
        cout<<"B"<<endl;
    }
    else if(a=='G' && b=='B'){
        cout<<"B"<<endl;
    }

    else if(a=='R' && b=='B'){
        cout<<"R"<<endl;
    }
    else if(a=='B' && b=='R'){
        cout<<"R"<<endl;
    }
    return 0;
}