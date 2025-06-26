//Inheritance with same function ormethod hiding.
// All the prev 2 code have same output with different concept.
#include<iostream>
using namespace std;
class daddy{
    public:
    void logic(){
        cout<<"Daddy class logic"<<endl;

    }
};
class child:public daddy{
    public:
    void logic(){
        cout<<"Child class logic"<<endl;
    }
};
int main(){
    daddy obj;
    obj.logic();
    child ob;
    ob.logic();

    return 0;
}