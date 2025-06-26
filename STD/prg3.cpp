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
    cout<<"Using for loop"<<endl;
     for(int i=0;i<arr.size();i++){// for loop
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    array<int,5> ::iterator ptr;
    // cout<<arr.begin()<<endl;
    // cout<<arr.end()<<endl;
    cout<<"Using Iterator"<<endl;
    for(ptr=arr.begin();ptr!=arr.end();ptr++){//iterator
        cout<<*ptr<<" ";
    }
    cout<<endl;
    cout<<"using for each loop"<<endl;
    for(int a : arr){// for each loop.
        cout << a <<" " ;
    }



    return 0;
}