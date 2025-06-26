#include<iostream>
#include<array>
#include<iterator>
using namespace std;
int main(){
    array<int,5> arr;
    cout<<"Enter the elements of array: ";
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    cout<<"Array: "<<endl;
     for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}