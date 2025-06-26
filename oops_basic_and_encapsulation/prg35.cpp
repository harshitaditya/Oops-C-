#include<iostream>
using namespace std;
class time{
    private:
    int hh,mm,ss;
    public:
    time(int hour=0,int min=0,int second=0){ //constructor
     hh=hour;
     mm=min;
     ss=second;


     }
    void display(){
        cout<<"Time: "<<hh<<":"<<mm<<":"<<ss<<endl;
       
     }
     void add(time x,time y){ //here we call the object
        // int temp_hh=0;
        // int temp_mm=0;
        // int temp_ss=0;
        ss=x.ss+y.ss;
        if(ss>60){
            ss=ss%60;
            //temp_ss=ss/60;

        }
        
        mm=x.mm+y.mm+(ss/60);

         if(mm>60){
            mm=mm%60;
           

        }
        hh=x.hh+y.hh+(mm/60);
        cout <<"Time after Add:" <<hh << ":" << mm << ":" << ss << endl; 
     }

    

};
int main(){
    time t1(5,50,30), t2(7,20,34);
    t1.display();
    t2.display();
    t1.add(t1,t2);
    return 0;
}
