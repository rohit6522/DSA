#include<iostream>
using namespace std;

class Emp{
    private:

    string name;
    int id;
    int sal;
    
    public:
    void input(){
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Id: ";
        cin >> id;

        cout << "Enter Sal: ";
        cin >> sal;
    }

    void display(){
        cout << "Employee Details: \n";
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << sal <<  endl;
    }

};

int main(){
    Emp e;
    e.input();
    e.display();
}