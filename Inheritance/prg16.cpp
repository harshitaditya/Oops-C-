#include<iostream>
using namespace std;
class shape{
    protected:
    float length;
    float breadth,area,parameter,radius;
    float const pi=3.14;
    void input_rectangle(){
        cout<<"Enter the length of Rectangle: ";
        cin>>length;
        cout<<"Enter the Breadth of Rectangle: ";
        cin>>breadth;

        
    }
    void input_radius(){
        cout<<"Enter the radius of circle: ";
        cin>>radius;
        
    }

};

class circle:public shape{
    public:
    void Area(){
        area=pi*(radius*radius);

    }
    void Parameter(){
        parameter=2*pi*radius;
    }
    void get(){
        input_radius();
        Area();
        Parameter();
        cout<<"Area of circle: "<<area<<endl;
        cout<<"Parameter of circle: "<<parameter<<endl;

    }

};
class Rectangle:public shape{
    public:
    void Area(){
        area=length*breadth;
     }
     void Parameter(){
        parameter=2*(length+breadth);
     }
      void get(){
        input_rectangle();
        Area();
        Parameter();
        cout<<"Area of Rectangle: "<<area<<endl;
        cout<<"Parameter of Rectangle: "<<parameter<<endl;
        cout<<endl;

    }



} ;
int main(){
    Rectangle obj;
    obj.get();
    circle obj1;
    obj1.get();
    return 0;
}