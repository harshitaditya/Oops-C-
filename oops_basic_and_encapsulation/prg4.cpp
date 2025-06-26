#include<iostream>
using namespace std;
class student{

    private:
    int id;
    string name;
     int age;
     int marks;
     public:
     void set(){
        this->id=1;
        this->name="Aditya";
        this->age=20;
        this->marks=80;
     }
     void get(){
        cout<<"Id= "<<id<<endl;
         cout<<"Name=  "<<name<<endl;
          cout<<"Age= "<<age<<endl;
           cout<<"Marks= "<<marks<<endl; 

     }
};
int main(){
    student obj;
    obj.set();
    obj.get();
    return 0;
}
