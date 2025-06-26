#include<iostream>
using namespace std;
class A{
    int a,b,c;
    public:
    A(){

    }
    A(int x,int y,int z){
        a=x;
        b=y;c=z;
    }
    A operator-(A tmp){
        A tmp2;
        tmp2.a=-(tmp.a);
        tmp2.b=-(tmp.b);
        tmp2.c=-(tmp.c);
        return tmp2;

    }
    void get(){
        cout<<a<<" "<<b<<" "<<c<<endl;

    }

};
int main(){
    A ob1(10,-2,-3);
    A ob2;
    ob2=ob1.operator-(ob1);
     
    ob2.get();
    return 0;
}