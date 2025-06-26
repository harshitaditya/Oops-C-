// pointer to function
#include<iostream>
using namespace std;
void func(string name){
    cout<<"Hello "<<name<<endl;
}
int main(){
    void (*ptr)(string);
    ptr=&func;
    ptr("Aditya");
    return 0;
}