#include<iostream>
using namespace std;
class circle{
    private:
    const float Pi=3.14;
    float radius,result;
    public:
    void set(){
        cout<<"Enter the radius of circle: ";
        cin>>radius;

    }
    void calc(){
        result=(Pi*radius*radius);
    }
    void get(){
        cout<<"Area of Circle: "<<result<<endl;
    }

};
int main(){
    circle obj;
    obj.set();
    obj.calc();
    obj.get();
    return 0;
}