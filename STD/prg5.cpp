#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,5> arr = {11,22,33,44,55};
    int *ptr;
    ptr=arr.data();
    for(int i=0;i<arr.size();i++){
        cout<<*(ptr+i)<<" ";

    }
   
    return 0;
}

