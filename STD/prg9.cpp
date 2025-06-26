#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main(){
    array<int,10> arr = {1,2,3,2,2,3,3};
    auto maxvalue=max_element(arr.begin(),arr.end());
    cout<<"maximum element "<<*maxvalue<<endl;
     auto minvalue=min_element(arr.begin(),arr.end());
    cout<<"minimum element "<<*minvalue<<endl;
   
    return 0;
}

