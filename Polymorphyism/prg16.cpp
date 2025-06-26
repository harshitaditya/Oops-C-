#include<iostream>
using namespace std;
string func1(string name){
    string str="hello "+name;
    return str;
}
string func2(string name){
    string str="hello "+name;
    return str;
}
int main(){
    string (*ptr[2])(string);
    ptr[0]=&func1;
    ptr[1]=&func2;
    cout<<ptr[0]("Aditya")<<endl;
    cout<<ptr[1]("Anurag")<<endl;


    return 0;
}