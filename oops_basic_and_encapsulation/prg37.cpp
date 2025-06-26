#include<iostream>
using namespace std;
class calculate{
    private:
    float num1,num2,sum,sub,mul,div;
    public:
    calculate(float num1,float num2){
        this->num1=num1;
        this->num2=num2;

    }
    void add(){
        sum=num1+num2;
        cout<<"Add= "<<sum<<endl;

    }
    void subtraction(){
        sub=num1-num2;
        cout<<"Subtraction: "<<sub<<endl;

    }
    void multiplication(){
        mul=num1*num2;
        cout<<"Multiplication: "<<mul<<endl;


    }
    void division(){
        div=num1/num2;
        cout<<"Division: "<<div<<endl;
    }

};
int main(){
    calculate c1(45,5);
    c1.add();
    c1.multiplication();
    c1.subtraction();
    c1.division();
    return 0;
}