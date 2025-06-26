#include<iostream>
using namespace std;
class person{
    public:
    int age;string name;
    public:
    void input(){
        cout<<"Enter the name: ";
        getline(cin,name);
        cout<<"Enter the age: ";
        cin>>age;
    }


};
class student:public person{
    public:
    int student_id;
    public:
    void set_student(){
        cout<<"Enter the student Id: ";
        cin>>student_id;
    }
    void get_student(){
        input();
        set_student();
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student Age: "<<age<<endl;

    }

};
class employee:public person{
    public:
    int employee_id;
    public:
    void set_employee(){
        cout<<"Enter the Employee Id: ";
        cin>>employee_id;
    }
    void get_employee(){
        input();
        set_employee();
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee Age: "<<age<<endl;

    }

};


int main(){
    return 0;
}