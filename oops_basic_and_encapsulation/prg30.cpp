#include<iostream>
using namespace std;
class A{
    public:
    int a,b;
};
int main(){
    A obj;
    obj.a=20;
    obj.b=90;
    A &ro=obj;
    cout<<ro.a<<" "<<ro.b;
    return 0;
}