#include<iostream>
using namespace std;
class A{
    public:
    void logic(){
        cout<<"Member class";
    }
    virtual void logic1()=0;

};
class B:public A{
    public:
    void logic1(){// here we make the incomplete class to complete class.
        cout<<"overwritten method ";
    }
    

};
int main(){
    // A obj;// here we get error because we canot make object of in complete class.
    // obj.logic();
   // A *ptr;
   B ob;
   ob.logic1();

    return 0;
}