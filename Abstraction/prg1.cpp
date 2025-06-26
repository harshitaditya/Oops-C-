#include<iostream>
using namespace std;
class A{
    public:
    void logic(){
        cout<<"Member class";
    }
    virtual void logic1()=0;

};
int main(){
    // A obj;// here we get error because we canot make object of in complete class.
    // obj.logic();
    A *ptr;
    return 0;
}