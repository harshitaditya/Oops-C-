#include<iostream>
using namespace std;
int sum1(int a,int b){
    return a+b;
}
int sum2(int *a,int *b){
    return (*a+*b);
    
}
int sum3(int &a,int &b){
    return a+b;
}
int main(){
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    // int &num1=a;
    // int &num2=b;
    //call by value
    cout<<sum1(a,b)<<endl;
    //call by address
    cout<<sum2(&a,&b)<<endl;
    //call by reference
    cout<<sum3(a,b)<<endl; 
    return 0;
}