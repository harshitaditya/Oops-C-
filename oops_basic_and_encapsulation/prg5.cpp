#include<iostream>
using namespace std;
class A{
    public: 
    int a,b; //instance data And non static data 
   static int x,y; //Static data
};
int A::x; //memeory allocation of static data
int A::y;
int main(){
    A obj;
    obj.a=10;
    obj.b=20;
    A::x=30; //to assign the value use class name and SRO(Scope resolution operator) for static value.
    A::y=40; //instance data
    cout<<"a= "<<obj.a<<endl;
    cout<<"b= "<<obj.b<<endl;
    cout<<"x= "<<A::x<<endl;
    cout<<"y= "<<A::y<<endl;
    return 0;
}