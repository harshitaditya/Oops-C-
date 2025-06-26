#include<iostream>
using namespace std;
class parent{
    private:
    int pri;
    protected:
    int pro;
    public:
    int pub;
    void set(){
        pri=10;
        pro=20;
        pub=30;
    }
};
class child:public parent
{
    public:
    void get(){
    set();
    cout<<"protected data: "<<pro<<endl;
    cout<<"public data: "<<pub<<endl;

    }

};
int main(){
    child obj;
    obj.get();

    return 0;
}