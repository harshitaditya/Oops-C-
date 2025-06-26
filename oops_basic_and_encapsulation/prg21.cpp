#include<iostream>
using namespace std;
class employee{
    private: 
    int empid;
    int salary,dept_id;
    string name;
    static string founder;
    static string company;
    static int turnover;
    public:
    void set(int empid,string name,int dept_id,int salary){
        this->empid=empid;
         this->name=name;
         this->dept_id=dept_id;
        this->salary=salary;
        founder="Aditya Kumar";
        company="Aditya Birla Group";
        turnover=1000000000;
        
       
    }
    static void logic(){
        founder="Aditya Kumar";
        company="Aditya Birla Group";
        turnover=1000000000;
        cout<<"Company: "<< company<<endl;
        cout<<"Founder: "<< founder<<endl;
        cout<<"Total Turnover: "<< turnover<<endl;
        cout<<endl;
        

    }

    void get(){
        cout<<"Employee id: "<< empid<<endl;
        cout<<"Employee Name: "<< name<<endl;
        cout<<"Department Id: "<< dept_id<<endl;
        cout<<"Salary: "<< salary<<endl;
        cout<<"Company: "<< company<<endl;
        cout<<"Founder: "<< founder<<endl;
        cout<<"Total Turnover: "<< turnover<<endl;
        cout<<endl;
        

    }


};
string employee::company;
string employee::founder;
int employee::turnover;
int main(){
    employee e1,e2;
    e1.set(1,"Ankit",001,100000);
    e1.get();
    e2.set(2,"Anurag",002,2000000);
    e2.get();
    employee::logic();
  

    return 0;
}

