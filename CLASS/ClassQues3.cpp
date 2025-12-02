#include<iostream>
using namespace std;

class BankAccount{
    private:
    string name;
    int accountNumber;
    float balance;

    static float interestRate;

    public:

    BankAccount(string s, int accnum, float blnc, float inR){
        name = s;
        accountNumber = accnum;
        balance = blnc;
        interestRate = inR;
        interestRate++;
    }

    inline void display(){
        cout << "Enter Account Holder Name: "<<name << endl;
        cout << "Enter Account Number: "<<accountNumber << endl;
        cout << "Enter BankBalance: "<<balance << endl;
    }

    void Deposite(float amount){
        balance+=amount;
        cout << name << "Deposite = " << amount<< endl;
        cout << "Update bln " << balance<< endl;
    }

    static void changeinr(float newRate){
        interestRate = newRate;
        cout << "New Interest Rate " << interestRate  << endl;
        }

    void updateBlnc(float NewBlnc){
        balance=NewBlnc;
    }

    friend void calculateInterestRate(BankAccount &acc);
    

};

float BankAccount::interestRate = 2.5;

void calculateInterestRate(BankAccount &acc){
        float intrest = (acc.balance * BankAccount::interestRate)/100;
        cout << "Intrest = " << intrest << endl;

    // acc.balance+=intrest;
    // cout << "New Balance: " << endl;
}

int main(){
    BankAccount b1("Rohit", 41241424,50000,2.1);
    b1.Deposite(2000);

    BankAccount::changeinr(2.5);
    calculateInterestRate(b1);

    b1.display();
    return 0;
    
}

