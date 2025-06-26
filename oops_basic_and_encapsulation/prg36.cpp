#include<iostream>
using namespace std;
class Area{
    private:
    float area,length,breadth;
    public:
    Area(int x=0,int y=0){ //parameterized constructor
        this->length=x;
        this->breadth=y;

    }
    void calc(){
        area=length*breadth;
        cout<<"Area: "<<area<<endl;
    }
};
int main(){
    Area a1(2,3);
    a1.calc();
   

    return 0;
}