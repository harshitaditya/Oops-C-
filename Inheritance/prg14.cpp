#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"A class constructor"<<endl;
    }
    ~A(){
        cout<<"A class Distructor"<<endl;
    }
};
class B:public A{
    public:
    B(){
        cout<<"B class Constructor"<<endl;
    }
    ~B(){
        cout<<"B class Distructor"<<endl;
    }
};
int main(){
    B();
    return 0;
}
