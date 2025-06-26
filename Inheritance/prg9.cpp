#include<iostream>
using namespace std;
class A{
    int a=10;
    int b=20;
    public:
    void add(){
        cout<<"Sum: "<<a+b<<endl;
    }


    };
class B{
    int c=4;
    int d=5;
    public:
    void mul(){
        cout<<"Multiply: "<<c*d<<endl;
    }
   
    };
class C:public A,public B{ //using multiple base class
    public:
    void get(){
    add();
    mul();
    }


   
    
};
int main(){
    C obj;
    obj.get();
    return 0;
}