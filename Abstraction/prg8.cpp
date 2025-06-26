#include<iostream>
using namespace std;
class ITSCMP{
    int a,b,c;
    public:
    int compare(int a,int b){
        if(a>b){
            return a;
        }
        else{
            return b;
        }
        
    }
    float compare(float a, float b){
         if(a>b){
            return a;
        }
        else{
            return b;
        }

    }
    char compare(char a,char b){
         if(a>b){
            return a;
        }
        else{
            return b;
        }

    }

};
int main(){
    ITSCMP obj;
   cout<< obj.compare(2,4)<<endl;
   cout<<obj.compare(2.3f,2.5f)<<endl;
    cout<<obj.compare('a','b')<<endl;


    return 0;
}