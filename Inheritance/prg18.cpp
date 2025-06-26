#include<iostream>
using namespace std;
class Student{
    int age;
    string name;
    int roll;
    
    public:
    static int count;
    Student(string b,int a,int c){
        name=b;
        age=a;
        roll=c;
        count++;
    }
    
};
int Student::count=0;
int main(){
   Student s1("Aditya",20,1);
   Student s2("Aditya",20,1);
   Student s3("Aditya",20,1);
   Student s4("Aditya",20,1);
    cout<<Student::count;
    return 0;
}