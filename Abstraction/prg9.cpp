#include<iostream>
using namespace std;
// using template it decrease the number of line in code.
    template<class T>
    T compare(T a,T b){
        if(a>b){
            return a;
        }
        else{
            return b;
        }
        
    }
    
    int main(){
        // explicit Type
    // cout<<compare<int>(2,4)<<endl;
    // cout<<compare<float>(2.3f,2.5f)<<endl;
    // cout<<compare<char>('a','b')<<endl;
       //implicit Type 
    cout<<compare(2,4)<<endl;
    cout<<compare(2.3f,2.5f)<<endl;
    cout<<compare('a','b')<<endl;



    return 0;
}