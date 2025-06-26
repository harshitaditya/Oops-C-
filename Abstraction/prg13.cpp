#include<iostream>
using namespace std;
template<typename t1,int b>
void add(t1 a){
    cout<<a<<" "<<b<<endl;

}
int main(){
    add<int,20>(10);
    return 0;
}