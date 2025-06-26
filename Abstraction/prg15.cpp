
//In minus(-) operator, if treated as binary operator -> the no. of arguments will be 2.
//                      if treated as a unary operator -> there will be no arguments.
#include<iostream>
using namespace std;
class oprover{
    int a,b;
    public:
    void over(int a, int b){
        this->a=a;
        this->b=b;
    }
    friend oprover operator-(oprover &tmp1,oprover &tmp2);// in operator overloading we pass two argument in friend function and in member function we pass one arguments.
    void get(){
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;
    }
   
};
oprover operator-(oprover &tmp1,oprover &tmp2){
        oprover tmp3;
        tmp3.a=tmp1.a-tmp2.a;
        tmp3.b=tmp1.b-tmp2.b;
        return tmp3;
    }


   

int main(){
    oprover o1,o2,o3;
    o1.over(9,7);
    o2.over(6,8);
    o3=o1-o2; // here-> o1-calling operand and o2- is argument operand.
    o3.get();
    return 0;
}
//In member function:-
//User      ->   ob3 = ob1 - ob2;
//Computer  ->   ob3 = A:: operator << (ob1& , ob2);