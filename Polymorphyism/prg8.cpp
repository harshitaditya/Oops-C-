#include<iostream>
using namespace std;
class daddy{
    public:
    
};
class child:public daddy{
    public:
     void logic(){
        cout<<"child class logic"<<endl;

    }
   
};
int main(){
    daddy obj;
    //obj.logic();//it will  through error
    child ob;
    ob.logic();

    return 0;
}
