#include<iostream>
using namespace std;
int main(){
    float length,inches,feet;
    cout<<"Enter length in meter: ";
    cin>>length;
    feet=3.28*length;
    cout<<"Meter: "<<feet<<endl;
    inches=12*length;
    cout<<"inches: "<<inches<<endl;
    return 0;
}