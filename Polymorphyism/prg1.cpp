//function overloading
#include<iostream>
using namespace std;
class ITS{
    public:
void logic(){
    cout<<"No Argument"<<endl;

}
void logic(int x){
    cout<<"One Argument"<<endl;
}
void logic(int x, int y){
    cout<<"Two Argument"<<endl;
}
};

int main(){
    ITS obj;
    obj.logic();
    obj.logic(1);
    obj.logic(1,2);
    return 0;
}