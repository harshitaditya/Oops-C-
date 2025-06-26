#include<iostream>
#include<array>
#include<iterator>
#include<algorithm>
using namespace std;
int main(){
    array<int,5> arr;
    cout<<"Enter the elements of array: ";
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());// using library
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}