//object as a argument in class function
// #include<iostream>
// using namespace std;
// class B{
//     public:
//     int b;

// };
// class A{
//     public:
//     A(B tmp){
//     cout<<"parameter.const"<<" "<<tmp.b;
//     }

// };
// int main(){
//     B obj;
//     obj.b=99;
//     A ob(obj);// class  A having object name ob and its call class B object (obj); 

//     return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////


// object as argument in member function or non static function
#include<iostream>
using namespace std;
class B{
    public:
    int b;

 };
class A{
       public:
         void logic (B tmp){
         cout<<"parameter.const"<<" "<<tmp.b;
              }

 };
int main(){
    B obj;
    obj.b=99;
    A ob;
    ob.logic(obj);

    return 0;
}

