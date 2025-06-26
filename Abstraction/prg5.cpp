//freind function
#include<iostream>
using namespace std;
class A{
    int data1;
    public: 
    void fun(){
        data1=10;
        //cout<<data1;
    }
    friend void global_func();

};
void global_func(){
    int data2=20;
    A ob;
    ob.fun();
    cout<<ob.data1+data2;

}
int main(){
   global_func();
    return 0;
}