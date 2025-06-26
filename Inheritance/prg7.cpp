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
        cout<<"Parent class"<<endl;
        cout<<"pri= "<<pri<<" "<<"pro= "<<pro<<"pub="<<pub<<endl;
        cout<<endl;

    }


};
class B:public A{
   // pri,pro,pub all three variable inherit but child calss only access pro and pub in public visibility.
    public:
    void bgetdata(){
        pro=80;
        pub=90;
       // pri=100; private can not be accessed but  it inherit in child class.
       cout<<"Child class: "<<endl;
        cout<<"pro= "<<pro<<" "<<"pub= "<<pub<<endl;
         cout<<endl;
    }

};
class C:public B{
    //in Grand child class all variable accessed which is accessed in child class.here also private can not be accesed .,
    public:
    void cgetdata(){
        agetdata();
        bgetdata();
        pro=100;
        pub=110;
        cout<<"Grandchild Class"<<endl;
        cout<<"pro= "<<pro<<" "<<"pub= "<<pub<<endl;
    }
};
int main(){
    C obj;
    obj.cgetdata();
    return 0;
}