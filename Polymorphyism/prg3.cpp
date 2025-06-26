#include<iostream>
using namespace std;
class A{
    public:
    int a,b;
    public:
    A(){

    }
    A(int x,int y){
        a=x;
        b=y;
    }
    bool operator>(A tmp2){
        // A tmp3;
        // tmp3.a=this->a+tmp2.a;
        // tmp3.b=this->b+tmp2.b;
        // return tmp3;
        if(this->a > tmp2.a && this->b >tmp2.b){ // object of a1(1,2)>a2(2,3) or not.
            return true;
        }
        else{
            return false;
        }
    }
    void get(){
        cout<<" A: "<<a<<endl;
        cout<<" B: "<<b<<endl;
    }
};
int main(){
    A a1(1,2);
    A a2(2,3);
//    A tmp2;
//    tmp2=a1+a2;//obj1.operator+(obj2);
//    tmp2.get();
if(a1>a2 && a1>a2){
    a1.get();

}
else{
    a2.get();
}
    return 0;
}