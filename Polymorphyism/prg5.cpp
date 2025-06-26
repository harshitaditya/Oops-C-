//Inheritance
#include<iostream>
using namespace std;
class daddy{
    public:
    void logic1(){
        cout<<"Daddy class logic-1"<<endl;

    }
};
class child:public daddy{
    public:
    void logic2(){
        cout<<"Child class logic-2"<<endl;
    }
};
int main(){
    daddy obj;
    obj.logic1();
    child ob;
    ob.logic2();

    return 0;
}