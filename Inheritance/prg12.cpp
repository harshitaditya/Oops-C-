#include<iostream>
using namespace std;
class parent{
    public:
    parent(){
    cout<<"Base Class"<<endl;
    }

};
class child:public parent{
    public:
    child(){
        cout<<"Child class"<<endl;
    }

};
int main(){
    child obj;
    return 0;
}