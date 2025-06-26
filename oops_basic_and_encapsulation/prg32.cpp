#include<iostream>
using namespace std;
class student{
    private:
    int s_id,marks[10];
    string name;
    public:
    void set();
    void get();
    


};
 void student::set(){
    cout<<"Enter the Student id: ";
    cin>>s_id;
    cout<<"Enter the name of student: ";
   cin>>name;
    cout<<"Enter the marks of subject: ";
    
    for(int i=0;i<5;i++){
      cin>>marks[i];
     }
}
void student::get(){
    cout<<"Student id: "<<s_id<<endl;
    cout<<"Student name: "<<name<<endl;
    for(int i=0;i<5;i++){
        cout<<"Student Marks: "<<marks[i]<<endl;
    }
}


int main(){
    student s[3];
    for(int i=0;i<3;i++){
        s[i].set();
    }
    for(int i=0;i<3;i++){
        s[i].get();
    }
    return 0;
}