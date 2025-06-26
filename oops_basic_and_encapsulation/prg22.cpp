#include<iostream>
using namespace std;
int a=20;

int main(){
    int a=90;
    cout<<"a="<<a<<endl;
    cout<<"a="<<::a<<endl; // this is used to call the global variable.
    return 0;
}