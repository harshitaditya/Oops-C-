#include<iostream>
using namespace std;
struct stu
{
    int age;
    int id;
    
};
void func(stu obj){
    cout<<obj.age<<endl;
    cout<<obj.id<<endl;


}

int main(){
    void (*ptr) (stu);
    stu ob;
    ob.age=12;
    ob.id=123;
    ptr=&func;
    (ptr)(ob);

    return 0;
}