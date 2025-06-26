#include<iostream>
using namespace std;
class A{
    int data1;
    public:
    A(int x){
        data1=x;
        
    }
    void func();
};
class B{
    int data2;
    public:
    B(int x){
        data2=x;
        
    }
    //friend void A::func(); , or
    friend class A;
};

void A::func(){
   B obj(10);
   cout<<obj.data2 +data1;


    
}
int main(){
    A obj(20);
    obj.func();
    
    return 0;
}