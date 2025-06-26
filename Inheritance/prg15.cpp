#include<iostream>
using namespace std;
class person{
    public:
    int age;
    string name;
    public:
    void logic(){
        cout<<"Enter your name: ";
        getline(cin,name);
        cout<<"Enter your age: ";
        cin>>age;

    }
};
class Student:public person{
    int student_id;
    public:
    void logic1(){
    cout<<"Enter your Student Id: ";
    cin>>student_id;
    }
    void get(){
        logic();
        logic1();
        cout<<"Student Id: "<<student_id<<endl;
        cout<<"Name: "<<name<<endl;;
        cout<<"Age: "<<age<<endl;
       

    }

};

int main(){
    Student obj;
    obj.get();
    return 0;
}