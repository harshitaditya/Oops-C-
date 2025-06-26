#include<iostream>
using namespace std;
class calc{
    private:
    float num1,num2,add,mul,sub,div;
    public:
    void set(){
        cout<<"Enter First number: ";
        cin>>num1;
        cout<<"Enter Second number: ";
        cin>>num2;
    }
    void sum(){
        add=num1+num2;
    }
    void minus(){
        sub=num1-num2;
    }
    void multiplication(){
        mul=num1*num2;
    }
    void division(){
       
        div=num1/num2;
    }
    void get(){
        cout<<"Sum: "<<add<<endl;
        cout<<"Subtraction: "<<sub<<endl;
        cout<<"Mul: "<<mul<<endl;
        cout<<"Division: "<<div<<endl;

    }


};
int main(){
    calc obj;
    obj.set();
    obj.sum();
    obj.minus();
    obj.multiplication();
    obj.division();
    obj.get();


    return 0;
}