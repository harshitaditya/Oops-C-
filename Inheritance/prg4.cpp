#include<iostream>
using namespace std;
class parent{
    public:
    void splendor(){
        cout<<"Papa Splendor"<<endl;
    }
};
class baby:public parent{
    public:
    void bullet(){
        splendor();// member function of parent class.
        cout<<"baby bullet"<<endl;
    }

};
int main(){
    
    baby obj;
    obj.bullet();
    return 0;
}