#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main(){
    array<int,10> arr = {1,2,3,2,2,3,3};
    int c=count(arr.begin(),arr.end(),2);
    cout<<"the 2 comes "<<c<<" times in array. "<<endl;
   
    return 0;
}

