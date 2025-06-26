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
uni func(stu obj){
    uni abc;
    abc.age=obj.age; // in union here all memeory allocate to age if we use id then all memory allocate to id.
    return abc;

}

int main(){
    uni (*ptr) (stu);
    stu ob;
    ptr=&func;
    ob.age=12;
    ob.id=123;
   
    union uni b;
    b=(ptr)(ob);
    cout<<b.age<<endl;

    return 0;
}