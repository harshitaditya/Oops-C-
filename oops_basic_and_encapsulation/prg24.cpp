#include<iostream>
using namespace std;
inline int largest(int a,int b,int c){// inline function
    
    if(a>b && a>c){
        cout<<"a= "<<a<<endl;
    }
    else if(b>a && b>c){
       cout<<"b= "<<b<<endl;
    }
    else{
      cout<<"c= "<<c<<endl;
    }
    return -1;

}
int main(){
    largest(100,20,30);

    return 0;
}