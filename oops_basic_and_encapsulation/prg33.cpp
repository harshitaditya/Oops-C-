#include<iostream>
using namespace std;
int Add(int x=3,int y=5,int z=6){//Allocation of number is from right side.
    return (x+y+z);

}
int main(){
    cout<<"Add= "<<Add(1,2,3)<<endl;
     cout<<"Add= "<<Add(1,2)<<endl;
      cout<<"Add= "<<Add(12)<<endl;

    return 0;
}