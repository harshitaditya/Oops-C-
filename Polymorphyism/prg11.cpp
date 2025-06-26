//  we can use parent class method in case of method hiding by using SRO daddy::logic().
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
        daddy::logic();
        cout<<"Child class logic"<<endl;
    }
};
int main(){
    child ob;
    ob.logic();

    return 0;
}