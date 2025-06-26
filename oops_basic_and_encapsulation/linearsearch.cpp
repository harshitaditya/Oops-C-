#include<iostream>
using namespace std;
int main(){
    int size,target,a=-1;
    cout<<"Enter the size of Arary: ";
    cin>>size;
    cout<<"Enter the elements of array: ";
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }
    cout<<"Enter the element that you want to find the position: ";
    cin>>target;
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            a=1;
            cout<<"Element at pos: "<<i+1<<endl;
            break;
        }  
        }
        if(a==-1){
          cout<<"not Available";
        }
        

    
   
}