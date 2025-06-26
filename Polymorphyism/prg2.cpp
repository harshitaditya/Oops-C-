#include<iostream>
#include<cmath>
using namespace std;
class calc{
    float length,breadth,radius,area1,area2,area3;
    const float pi=3.14;
    public:
    void Area(int a,int b){
        length=a;
        breadth=b;
        area1=a*b;
        cout<<"Area of rectangle: "<<area1<<endl;

    }
    void Area(int x){
        radius=x;
         area2=pi*radius,radius;
        cout<<"Area of circle: "<<area2<<endl;
    }
    void Area(int x,int y,int z){
        float s=(x+y+z)/2.0;
        area3=sqrt(s*(s-x)*(s-y)*(s-z));
        cout<<"Area of triangle: "<<area3<<endl;


    }

};
int main(){
    calc obj;
    obj.Area(2);
    obj.Area(2,3);
    obj.Area(2,3,4);
    return 0;
}