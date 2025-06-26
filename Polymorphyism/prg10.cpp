// overriding and its dynamic linking.
#include<iostream>
using namespace std;
class daddy{
    public:
   virtual void logic(){// virtual keyword describe the function to pointer.
        cout<<"Daddy class logic"<<endl;

    }
};
class child1:public daddy{
    public:
    void logic(){
        cout<<"Child-1 class logic"<<endl;
    }
};
class child2:public daddy{
    public:
    void logic(){
        cout<<"Child-2 class logic"<<endl;
    }
};
int main(){
    daddy *dptr;
    daddy obj;
    dptr=&obj;
    dptr->logic();
     child1 obj1;
     dptr=&obj1;
     dptr->logic();
     child2 obj2;
     dptr=&obj2;
     dptr->logic();
    

    return 0;
}
//output:-
// Daddy class logic
// Child-1 class logic
// Child-2 class logic