#include<iostream>
using namespace std;
int main(){
    float percentage ,sum=0;
    string name[5];
    int marks[10];

    for(int i=0;i<5;i++){
    cout<<"Enter the name of subject: ";
    cin>>name[i];
    cout<<"Enter the marks of subject: ";
    cin>>marks[i];
     sum+=marks[i];
     percentage=100*sum/500;
     

     }
     for(int i=0;i<5;i++){
    cout<<"The subjects are: "<<name[i]<<endl;
     cout<<"The marks are: "<<marks[i]<<endl;
    
    }
    cout<<"Percentage: "<<percentage<<endl; 

    return 0;
}