#include<iostream>
using namespace std;
template<class T>
void logic(T &a,T &b){
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<" "<<b;
}
// class date{
//     int dd,mm,yy;
//     public:
//     date(int x,int y,int z){
//         dd=x;
//         mm=y;
//         yy=z;

//     }
//     bool operator<(date dt){
//         if(this->yy<dt.yy){
//             return true;
//         }
//         if(this->yy==dt.yy && this->mm<dt.mm){
//             return true;
//         }
//         if(this->yy== dt.yy && this->mm==dt.mm && this->dd<dt.dd){
//             return true;
//         }
//         return false;

//     }
//     void get(){
//         cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
//     }

    


// };
int main(){
    //logic<int>(2,3);
    
    // date dt1(23,12,2021);
    // date dt2(23,12,2021);
    // date tmp=logic<date>(dt1,dt2);
    // tmp.get();
    return 0;
}