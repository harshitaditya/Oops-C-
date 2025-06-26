#include<iostream>
using namespace std;
struct stu
{
    int age;
    int id;
};
union uni{
    int age;
    int id;
};
uni func1(stu obj,string name){
    cout<<"hello "+name<<endl;
    uni abc;
    abc.age=obj.age;
    return abc;

}
uni func2(stu obj,string name){
    cout<<"hello "+name<<endl;
    uni abc;
    abc.id=obj.id;
    return abc;

}

int main(){
    uni (*ptr[2])(stu,string);
    ptr[0]=&func1;
    ptr[1]=&func2;
    stu ob;
    ob.age=20;
    ob.id=1234;
    union uni b;
    b=(ptr[0])(ob,"Aditya");
    cout<<"Age "<<b.age<<endl;
    b=(ptr[1])(ob,"Ankit");
    cout<<"Id "<<b.id<<endl;
     return 0;
}