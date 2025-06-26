#include<iostream>
using namespace std; 
class A{
    int x;
    public:
    void setdata(int x){
        this->x=x;

    }
    friend void Add();
};
void Add(){
    A a;
     a.setdata(20);
     int data=10;
     cout<<data+a.x;
    
}
int main(){
    Add();

    return 0;

}