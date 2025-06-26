#include<iostream>
using namespace std;
class B{
    public:
    int b;
};
class A{
    public:
    B kayakalp(B tmp){
        cout<<"Before: "<<tmp.b<<endl;
        tmp.b=99;
        return tmp;


    }

};

int main(){
    B obj1,obj2;
    obj1.b=33;
    A ob;
   obj2= ob.kayakalp(obj1);
   cout<<"After: "<<obj2.b<<endl;
    

    return 0;
}