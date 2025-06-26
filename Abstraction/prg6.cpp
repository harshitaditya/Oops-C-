#include<iostream>
using namespace std;
class A{
    int data1;
    public:
    A(int x){
        data1=x;
        
    }
    friend void func();
};
class B{
    int data2;
    public:
    B(int x){
        data2=x;
        
    }
    friend void func();
};

void func(){
    int data3=30;
    A obj(10);
    B ob(20);
    cout<<obj.data1+ob.data2+data3;

    
}
int main(){
     func();
    return 0;
}