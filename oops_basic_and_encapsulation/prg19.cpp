#include<iostream>
using namespace std;
class student{
    private:
     float percentage ,sum=0;
    string name[20];
    int marks[10];
    public:
    void set(){
        for(int i=0;i<5;i++){
    cout<<"Enter the name of subject: ";
    cin>>name[i];
    cout<<"Enter the marks of subject: ";
    cin>>marks[i];
    sum+=marks[i];
     percentage=100*sum/500;
        }
    }
    void get(){
        for(int i=0;i<5;i++){
    cout<<"The subjects are: "<<name[i]<<endl;
     cout<<"The marks are: "<<marks[i]<<endl;
    
    }

    }
    void calc(){
         cout<<"Percentage: "<<percentage<<endl; 

    }
    void rank(){
        if(percentage>75){
            cout<<"Distinction"<<endl;

        }
        else if(percentage>=65 && percentage<75){
            cout<<"First"<<endl;
        }
        else if(percentage>=55 && percentage<65){
            cout<<"Second"<<endl;

        }
        else if(percentage>=30 && percentage<55){
             cout<<"Pass"<<endl;

        }
        else{
             cout<<"Fail"<<endl;
        }
    }

};
int main(){
    student obj;
    obj.set();
    obj.get();
    obj.calc();
    obj.rank();
    return 0;
}
