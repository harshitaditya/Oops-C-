#include<iostream>
using namespace std;
 class myself{
    private:
    string name;
    int age;
    string city;
    int pincode;
    public:
    void set(){
       cout<<"Enter your name: ";
       getline(cin,name);
       cout<<"Enter your age: ";
       cin>>age;
       cout<<"Enter your city: ";
       cin>>city;
       cout<<"Enter your pincode: ";
       cin>>pincode;

    }
    void get(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"City: "<<city<<endl;
        cout<<"Pin code: "<<pincode<<endl;


    }

 };
int main(){
    myself obj;
    obj.set();
    obj.get();
    return 0;
}