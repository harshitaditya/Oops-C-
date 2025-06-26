#include<iostream>
using namespace std;
class A{
    int a,b;
    public:
    A(){

    }
    A(int x,int y){
        a=x;
        b=y;
    }
    A(A &tmp){ //tmp is nickname of obj1
        cout<<"CC done"<<endl;
        a=tmp.a;
        b=tmp.b;
    }
    void disp(){
        cout<<" a= "<<a<<endl;
        cout<<" b= "<<b<<endl;

    }
};
int main(){
    A obj1(20,40);
    cout<<"obj1 value ="<<endl;
    obj1.disp();
    A obj2(obj1); //obj1 is copy in obj2
   //A obj2=obj1;  // another way to copy 
   //*****output
//    obj1 value =
//  a= 20
//  b= 40
// CC done
// obj2 values = 
//  a= 20
//  b= 40
   //******************************************************//
//    A obj2;
//    obj2=obj1; // here overloaded assignment operator is use.
   //******output:
   //obj1 value =
//  a= 20
//  b= 40
// obj2 values = 
//  a= 20
//  b= 40
    cout<<"obj2 values = "<<endl;
    obj2.disp();
    return 0;
}