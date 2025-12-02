#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int rollno;
    float marks;

    void inputdetails(){
        cout << "Name = " << name << endl;
        cout << "Roll No = " << rollno << endl;
        cout << "Marks = " << rollno << endl;
    }

};



int main(){
    Student obj;

    obj.name;
    cout << "Enter name ";
    cin >> obj.name;

    obj.rollno;
    cout << "Enter Roll No. ";
    cin >> obj.rollno;

    obj.marks;
    cout << "Enter marks ";
    cin >> obj.marks;

    obj.inputdetails();


}


//// 


#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    float balance;

public:
    void createAccount(string accHolder, int accNo, float initialBalance) {
        accountHolder = accHolder;
        accountNumber = accNo;
        balance = initialBalance;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient funds!" << endl;
        }
    }

    void displayBalance() {
        cout << "\nAccount Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acct;

    acct.createAccount("Rohit Kumar", 12345, 5000);
    acct.deposit(1500);
    acct.withdraw(2000);
    acct.displayBalance();

    return 0;
}