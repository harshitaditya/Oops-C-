// object oriented
#include<iostream>
using namespace std;
class Add{
    private:
    int a,b,c;
    public:
    void input(){
        cout<<"Enter two number: ";
        cin>>a>>b;

    }
    void process(){
        c=a+b;
    }
    void output(){
        cout<<"Add= "<<c<<endl;
    }

};
int main(){
    Add obj;
    obj.input();
    obj.process();
    obj.output();
    return 0;
}