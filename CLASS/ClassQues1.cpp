#include<iostream>
using namespace std;

class BankAccount{
    public:
    string accountHolder;
    int accountNumber;
    float balance;

    void createAccount(string accHolder , int accNumber , float initialBalance){
        accountHolder = accHolder;
        accountNumber = accNumber;
        balance = initialBalance;
    }

    void deposit(float amount){
        balance = balance + amount;
        cout << "Deposited = " << amount << endl;
    }

    void withdraw(float amount){
        if(amount <= balance){
            balance = balance - amount;
            cout << "withdraw = " << amount << endl;
        }else{
            cout << "Insufficient Blanace = " << endl;
        }
    }

    void displayBalance() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount obj;
    

    obj.accountHolder;
    cout << "Enter Holder Name = ";
    cin >> obj.accountHolder;

    obj.accountNumber;
    cout << "Enter account Number = " ;
    cin >> obj.accountNumber;

    obj.balance;
    cout << "enter balance = " ;
    cin >> obj.balance;


    obj.deposit();
    obj.withdraw();
    obj.displayBalance();

    return 0;
}