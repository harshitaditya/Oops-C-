#include<iostream>
using namespace std;
class A{
    public:
    A(){//non parameterized constructor because it does not have any parameter in constructor and parameterized coonstructor in in prg 34.
        cout<<"It is constructor."<<endl;
    }
    ~A(){
        cout<<"It is Distructor."<<endl;
    }
};
int main(){
    A obj;
    
    return 0;
}