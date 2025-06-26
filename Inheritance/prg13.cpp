#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A(int t){
        a=t;
        cout<<"Base class Constructor"<<endl;
        cout<<a<<endl;
    }
};
class B:public A{
    int x;
    int y;
    public:
    B(int t1,int t2):A(t1){// we can do A(t2),A(t1+t2),A(90).
        x=t1;
        y=t2;
        cout<<"Child Class"<<endl;
        cout<<x<<" "<<y<<endl;
    }
};

int main(){
    B (20,30);
    return 0;
}