#include<iostream>
using namespace std;
void exchange(int arr[],int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }

    }
   
    
}
int main(){
    
    int size;
    cout<<"Enter the size of array: "<<endl;
    cin>>size;
    int arr[size];
    
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    exchange(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "<<endl;
    }



    
    return 0;
}