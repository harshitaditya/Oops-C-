#include<iostream>
#include<exception>
#include<windows.h>
using namespace std;
int  main(){
    try{
        throw 2.1f;
        throw "Aditya";
        throw 'a';
        throw 2;
        
    }
    catch(int e){
        cout<<"Exception: int type"<<endl;
    }
    catch(char e){
         cout<<"Exception char type"<<endl;
    }
    catch(const char *Aditya){ // it will catch string
        cout<<"Ankit is handeled by aditya";
    }
    catch(...){// it will accept any exception.
        cout<<"Exception Any type "<<endl;

    }
    return 0;
}