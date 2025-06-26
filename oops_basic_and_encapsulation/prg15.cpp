#include<iostream>
using namespace std;
class Area{
    private:
    float length;
    float breadth;
    float result;
    public:
    void set(){
        cout<<"Enter the length of rectangle: ";
        cin>>length;
        cout<<"Enter the breadth of rectangle: ";
        cin>>breadth;

    }
    void process(){
        result=length*breadth;
    }
    void get(){
        cout<<"Area: "<<result<<endl;
    }

};
int main(){
    Area obj;
    obj.set();
    obj.process();
    obj.get();
    return 0;
}