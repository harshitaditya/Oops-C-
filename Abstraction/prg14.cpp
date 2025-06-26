#include<iostream>
using namespace std;
class oprover{
    int a,b;
    public:
    void over(int a, int b){
        this->a=a;
        this->b=b;
    }

    oprover operator-(oprover o2){
    oprover tmp3;
    tmp3.a=this->a-o2.a;
    tmp3.b=this->b-o2.b;
    return tmp3;
    }

    void disp(){
        cout<<"A->"<<a<<endl;
        cout<<"B->"<<b<<endl;
        cout<<"-------------------------------"<<endl;
    }
};

int main(){
    oprover o1,o2,o3;
    o1.over(9,7);
    o1.disp();
    o2.over(6,8);
    o2.disp();
    o3=o1-o2;
    o3.disp();
    return 0;
}