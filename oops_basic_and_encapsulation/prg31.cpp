#include<iostream>
using namespace std;
class Add{
    private:
    int a,b,c;
    public:
    void input();
    void process();
    void output();
    void add();
    


};
inline void Add::input(){
    //int a,b;
    cout<<"Enter two number: "<<endl;
    cin>>a>>b;
}
inline void Add::process(){
    c=a+b;
}
inline void Add::output(){
    cout<<"Sum: "<<c<<endl;
}
inline void Add::add(){
    input();
    process();
    output();

}

int main(){
    Add obj;
    obj.add();
    
    return 0;
}