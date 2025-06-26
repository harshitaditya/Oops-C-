#include<iostream>
using namespace std;
class A{
    public:
    void logic1(){        // Non Static Function
        cout<<"Non Static Function"<<endl;
    }
   static void logic2(){   // Static function
        cout<<"Static function"<<endl;
    }

};
int main(){
    A obj;
    obj.logic1();//here We use dot (.) operator to call the non static function.
    A::logic2(); // here we use SRO operator to call the static Function.
}