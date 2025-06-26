#include<iostream>
using namespace std;
class A{
    public:
    int a=20;
    int b=10;
    public:
    void add(){
        cout<<"Sum: "<<a+b<<endl;
    }


    };
class B:public A{

    public:
    void mul(){
        // a and b is accessed by child class because variable is public.
        add();// add function access by this class because class A is parent of this class.
        cout<<"Multiply: "<<a*b<<endl;
    }
   
    };
class C:public A{ //when class have multiple child heirearchial.
    public:
    void divide(){
    // a and b is accessed by this child class also because variable is public.
    add();//add function access by this class because class A is parent of this class.
    
    cout<<"divide: "<<a/b<<endl;
    }


   
    
};
int main(){
    C obj;
    B obj1;
    obj.divide();
    obj1.mul();
    return 0;
}