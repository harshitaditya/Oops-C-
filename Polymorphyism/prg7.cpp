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
   
};
int main(){
    daddy obj;
    obj.logic();
    child ob;
    ob.logic();

    return 0;
}
//output
// Daddy class logic
// Daddy class logic