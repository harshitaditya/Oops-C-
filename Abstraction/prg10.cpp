#include<iostream>
using namespace std;
 template<class T>
    T compare(T a,T b){
       return (a<b)?a:b;
        
    }
    int main(){
        int ans=compare<int>(10,20);
        cout<<ans;
        return 0;
    }
