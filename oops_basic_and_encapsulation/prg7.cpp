#include<iostream>
using namespace std;
int main(){
    int num;
    int result; 
    cout<<"Enter the number: ";
    cin>>num;
    result=((((num+40)/5)%2)*10);
    double ans=result;
    cout<<"Result= "<<ans<<endl;
    return 0;
}