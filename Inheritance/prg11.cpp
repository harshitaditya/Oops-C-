//Diamond problem uses virtual keyword.
#include<iostream>
using namespace std;
class A{


    };
class B:virtual public A{

   
    };
class C:virtual public A{ 

    
};
class D:virtual public B,virtual public C{
    public:
    int a;

};
int main(){
    D obj;
    obj.a=10;
    cout<<obj.a<<endl;
    return 0;
}