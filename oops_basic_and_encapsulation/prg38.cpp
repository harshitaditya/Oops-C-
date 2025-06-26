#include<iostream>
using namespace std;
class bank{
    private:
    int account_num,balance,withdrawl,a,deposit;
    public:
    bank(int account_num,int balance){
       this->account_num=account_num;
       this->balance=balance;
    }
    void deposit_money(){
        cout<<"Enter the money that you want to deposit: ";
        cin>>deposit;
        cout<<"your Account number: "<<account_num<<endl;
        balance=balance+deposit;
        cout<<"Total Money: "<<balance<<endl;
        cout<<endl;

    }
        
    
    
    void balance_rem(){
        cout<<"Enter the money that you want to withdraw: ";
        cin>>withdrawl;
        cout<<"your Account number: "<<account_num<<endl;
       
        if(withdrawl>balance){
            a=1;
            cout<<"Balance is not sufficeient"<<endl;
            cout<<"Your current Balance is: "<<balance<<endl;
           
        }

       
       else{
        balance=balance-withdrawl;
         cout<<"Remaining Money: "<< balance<<endl;
          cout<<endl;
       }
    }
   
   

};
int main(){
    bank b1(345536753,2000);
    int choice;
    cout<<"Enter 1 for withdrawl money!!!!"<<endl;
    cout<<"Enter 2 for deposit money!!!!"<<endl;
    cout<<"Enter 3 for exit!!!!"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice){
        case 1: b1.balance_rem();
                break;
        case 2: b1.deposit_money();
                break;
        default:
                break;
    }

    
    return 0;
}