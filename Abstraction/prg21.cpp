#include<iostream>
#include<exception>
#include<windows.h>
using namespace std;
int main(){
    try{

        try{
            throw 22;
        }
        catch(int e){
            cout<<"Exception Int type"<<endl;
        }
        throw "Aditya";
    }

        catch(...){
        cout<<"It will catch any exception"<<endl;
    }
     cout<<"Thanks"<<endl;
      return 0;
    }
    
   
    
   
