#include<iostream>
using namespace std;
int main(){
    int virat=48;
    int &chiku=virat;
    cout<<chiku<<endl;
    virat= 78;
    cout<<chiku<<endl;

}