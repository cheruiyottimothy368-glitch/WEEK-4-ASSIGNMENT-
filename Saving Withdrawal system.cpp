#include <iostream>
using namespace std;
int main() {
    double balance, withdrawalAmount;
    cout<<"Enter account balanceA:";
    cin>>balance;

    while (balance > 0) {
        cout<<"\nCurrent balance:"<<balance<<endl;
        cout<<"Enter withdrawal amount (0 to stop ):";
        cin>>withdrawalAmount;
        
        if(withdrawalAmount==0) {
            cout<<"You have stopped withdrawing."<<endl;
            break;
        }

        if(withdrawalAmount>balance) {
            cout<<"insufficient balance!"<<endl;
            continue;
        }
        balance=balance-withdrawalAmount;
        cout<<"Withdrawal succesfull!"<<endl;
        cout<<"Remaining balance:"<<balance<<endl;
    }
    if (balance==0) {
        cout<<"\nyour account balance is zero."<<endl;
    }
    cout<<"Thank you for using our system."<<endl;
    return 0;
}