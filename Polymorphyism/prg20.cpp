#include<iostream>
using namespace std;
namespace INDIA
{
    
class A{
    public:
    void logic(){
        cout<<"Namaste India"<<endl;

    }
};
class B{
    public:
    void logic1(){
        cout<<"Namaste USA"<<endl;
    }
};
}
int main(){
    INDIA::A obj;
    obj.logic();
    INDIA::B ob;
    ob.logic1();
    return 0;
}
