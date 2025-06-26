#include<iostream>
using namespace std;
template<typename t1,typename t2>
void mymax(t1 a,t2 b){
     if(a>b){
            cout<< a<<endl;
        }
        else{
            cout<< b<<endl;
        }
}
template<typename t1,typename t2>
void mymin(t1 a,t2 b){
     if(a<b){
            cout<< a<<endl;
        }
        else{
            cout<< b<<endl;
        }
}
int main(){
    mymax<int>(10,20);
    mymin<int>(10,20);

    return 0;
}