#include<iostream>
using namespace std;
int main(){
    int length,breadth,area,parameter;
    cout<<"Enter the leength of rectangle: ";
    cin>>length;
    cout<<"Enter the breadth of rectangle: ";
    cin>>breadth;
    area=length*breadth;
    cout<<"Area: "<<area<<endl;
    parameter=2*(length+breadth);
    cout<<"Parameter: "<<parameter<<endl;
    return 0;
}