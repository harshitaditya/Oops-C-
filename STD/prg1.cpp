#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,5> arr = {11,22,33,44,55};
    // for(int a : arr){// for each loop.
    //     cout << a << endl ;
    // }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" "<<endl;

    }
    cout<<arr.size()<<endl;
    cout<<arr.at(1)<<endl;
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;
    // array<string,5> arr1 = {"Aditya","Ankit","Rohan","Dev","Anurag"};
    // for(string a : arr1){// for each loop.
    //     cout << a << endl ;
    // }
    return 0;
}

