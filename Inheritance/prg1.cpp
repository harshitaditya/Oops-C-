#include<iostream>
using namespace std;
class A{
    public:
    void afun(){
        cout<<"A class"<<endl;
    }
};
class B:public A{
    public:
    void bfun(){
       // cout<<"B class"<<endl;
    }
};
int main(){
   
    B obj;
  // obj.afun();
    obj.bfun();

    return 0;
}