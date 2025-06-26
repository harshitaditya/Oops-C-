#include<iostream>
using namespace std;
class A{
    private:
    int a,b;
    public:
    A(int x ,int y){//parameterized constructor
        // a=10;
        // b=20;
        this->a=x;
        this->b=y;
        cout<<"Constructor"<<endl;
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;
    }
    // void set_get(){
    //     a=30;
    //     b=40;
    //     cout<<"Member function"<<endl;
    //     cout<<"a= "<<a<<endl;
    //     cout<<"b= "<<b<<endl;

    // }

};
int main(){
    A obj1(10,20),obj2(30,40);
    
    return 0;
}