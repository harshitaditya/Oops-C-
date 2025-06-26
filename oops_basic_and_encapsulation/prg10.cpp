#include<iostream>
using namespace std;
int main(){
    int temp;
    float kelvin,ferh;
    cout<<"Enter the temperature in celcius: ";
    cin>>temp;
    kelvin=temp+273.15;
    cout<<"Kelvin: "<<kelvin<<endl;
    ferh=temp*(9/5)+32;
    cout<<"Ferhenite: "<<ferh<<endl;

    return 0;
}