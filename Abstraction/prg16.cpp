#include<iostream>
using namespace std;
template<class T>
T logic(T &a,T &b){
    return (a<b)?a:b;
}
class date{
    int dd,mm,yy;
    public:
    date(int x,int y,int z){
        dd=x;
        mm=y;
        yy=z;

    }
    bool operator<(date dt){
        if(this->yy<dt.yy){
            return true;
        }
        if(this->yy==dt.yy && this->mm<dt.mm){
            return true;
        }
        if(this->yy== dt.yy && this->mm==dt.mm && this->dd<dt.dd){
            return true;
        }
        return false;

    }
    void get(){
        cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
    }

    


};
int main(){
    int i=10,j=20;
    cout<<logic(i,j)<<endl;
    date dt1(23,12,2021);
    date dt2(23,12,2021);
    date tmp=logic<date>(dt1,dt2);
    tmp.get();
    return 0;
}
