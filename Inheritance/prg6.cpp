#include<iostream>
using namespace std;
class A{
    private:
    int pri;
    protected:
    int pro;
    public:
    int pub;
    public:
    void agetdata(){
        // All three variable pub,pro,pri can access in same class.
       int pri=20;
        int pro=30;
        int pub=40;
        cout<<pri<<" "<<pro<<" "<<pub<<endl;

    }


};
class B:public A{
   // pri,pro,pub all three variable inherit but child calss only access pro and pub in public visibility.
    public:
    void bgetdata(){
        pro=80;
        pub=90;
       // pri=100; private can not be accessed but  it inherit in child class.
        cout<<pro<<" "<<pub;
    }

};
int main(){
    B obj;
//    obj.pub=70; // only public variable can be accessed outside the class.w
//    cout<<obj.pub<<endl;
    obj.agetdata();
    obj.bgetdata();
    return 0;
}