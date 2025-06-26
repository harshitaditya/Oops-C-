#include<iostream>
using namespace std;
class A{
    private:
    int a,b;
    static int c,d;
    public:
    void logic1(){
        a=20; // it is non static function and and not static function use both static and non static data.
        b=30;c=40;
        d=50;
        cout<<"Non static Data: "<<" "<< a <<" "<< b <<" "<< c <<" "<< d <<endl;

    }
   static void logic2(){
       // a=89; it show error if we use non static data  in static function.
       // b=99;
        c=60; // it is static function and static function only use static data.
        d=70;
        cout<<"Static data: "<<" "<< c <<" "<< d <<endl;
    }
};
int A::c; // memory Allocation
int A::d;
int main(){
    A obj;
    obj.logic1();
    A::logic2();
    return 0;
}
