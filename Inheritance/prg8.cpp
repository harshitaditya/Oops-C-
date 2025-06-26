#include<iostream>
using namespace std;
void Afun(){
    cout<<"Global Function"<<endl;
}
class A{
    public:
    void Afun(){
        cout<<"Member Function"<<endl;
        ::Afun();
        //A fun() if we use this then it will be stack overflow.it will run in infinite loop. 
    }

};
int main(){
    A obj;
    obj.Afun();
    return 0;
}