#include<iostream>
using namespace std;
template<typename t1>// another way to create template.
void add(t1 a,t1 b){
    cout<<"a+b: "<<a+b<<" "<<a<<" "<<b<<endl;
}
template<typename t1,typename t2>//another way to create template.
void sub(t1 a,t2 b){
    cout<<"a-b: "<<a-b<<" "<<a<<" "<<b<<endl;
}
int main(){
    add(97,48);
    add<char>(97,65);
    sub(97,65);
    sub<char>(97,65);

    return 0;
}