#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main(){
    array<int,5> arr = {11,22,33,44,55};
    int x=55;
    auto ptr=find(arr.begin(),arr.end(),x);
    cout<<ptr<<endl;// it gives the address of memeory
    if(ptr!=arr.end()){
        cout<<"value find at pos "<<ptr-arr.begin()<<endl;
    }
    else{
        cout<<"value not found"<<endl;
    }
    
   
    return 0;
}

