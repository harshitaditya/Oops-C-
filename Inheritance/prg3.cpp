#include<iostream>
using namespace std;
class parent{
    public:
    int a;
};
class baby:public parent{
    public:
    int b;

};
int main(){
    parent p;
    baby b;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(b)<<endl;
    return 0;
}