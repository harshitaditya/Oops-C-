// Using pointer
#include<iostream>
using namespace std;
class A{
    public:
    void logic(){
        cout<<"Member class"<<endl;;
    }
    virtual void logic1()=0;
    virtual void logic2()=0;

};
class B:public A{
    public:
    void logic1(){// here we make the incomplete class to complete class.
        cout<<"overwritten method 1"<<endl;;
    }
    

};
class C:public B{
    public:
    void logic2(){
        
        cout<<"Overwritten method 2"<<endl;
    }

};
int main(){
    A *ptr;
    C obj;
    ptr=&obj;
    ptr->logic();
    ptr->logic1();
    ptr->logic2();
   

    return 0;
}