#include<iostream>
using namespace std;
inline int Add(int x,int y);// Declaration 
int main(){
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    cout<<Add(a,b)<<endl;

    return 0;
}
inline  int Add(int x,int y){ //inline function is used for the function having small no.of codes.
    return x+y;
}
