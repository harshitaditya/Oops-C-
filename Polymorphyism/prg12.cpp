#include<iostream>
using namespace std;
class A{
    public:
    int s1,s2,s3;
    public:
    A(){

    }
    A(int x,int y){
        s1=x;
        s2=y;
    }
    A operator*(A tmp){
        A tmp2;
       tmp2.s1= this->s1*tmp.s1;
       tmp2.s2=this->s2*tmp.s2;
       return tmp2;

    }
    void get(){
        cout<<"s1= "<<s1<<endl;
        cout<<"s2= "<<s2<<endl;

    }

};
int  main(){
    A s1(2,3);
    A s2(2,5);
    A s3;
    s3=s1*s2;
    s3.get();
    return 0;
}