//object oriented
#include<iostream>
#include <string.h>
using namespace std;
class Student{
    private:
    int sid;
    string name;
    int age;
    static int college_estd_year;
    static int college_practical;
    static string college;
    public:
    void set(int sid,string name,int age){
        this->sid=sid;
        this->name=name;;
        this->age=age;
        // sid=1;
        // name="Aditya";
        // age=20;
        college_estd_year=2006;
        college="I.T.S Engineering college";
        college_practical=40;


    }
    void get(){
        cout<<"Id: "<<sid<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"College Established Year: "<<college_estd_year<<endl;
        cout<<"College Name: "<<college<<endl;
         cout<<"Practical Marks: "<<college_practical<<endl;
        

        }
  
};
 int Student::college_estd_year;
 string Student::college;
  int Student::college_practical;


   int main()
   {
    Student s1,s2;
    s1.set(1,"Aditya",20);
    s1.get();
    s2.set(2,"Anurag",19);
    s2.get();
    
    return 0;
   }
