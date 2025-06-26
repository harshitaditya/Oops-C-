#include<iostream>
using namespace std;
class bank{
    public:
    int account_num,balance,withdrawl,remaining,a;
    public:
    void logic1(){
        cout<<"Enter the Account number: ";
        cin>>account_num;
        cout<<"Enter your Current Balance: ";
        cin>>balance;
    }
    void logic2(){
        cout<<"Enter the Money that you Want to Withdraw: ";
        cin>>withdrawl;
        
    
    }
    void logic3(){
        if(withdrawl>balance){
            a=1;
            cout<<"Balance is not sufficeient"<<endl;
            cout<<"Your current Balance is: "<<balance<<endl;
           
        }

       
       else{
        remaining=balance-withdrawl;
         cout<<"Remaining Money: "<< remaining<<endl;
       }
    }
   

};
int main(){
    bank obj;
    obj.logic1();
    obj.logic2();
    obj.logic3();
    
    return 0;
}