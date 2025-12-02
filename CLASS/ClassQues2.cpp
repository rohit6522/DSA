#include<iostream>
using namespace std;

class Employee{
    private:
    int empID;
    string name;
    string department;
    float salary;


    static int empCount;


public:
    Employee(int id, string n, string dep, float sl){
        empID = id;
        name = n;
        department = dep;
        salary = sl;
        empCount++;
    }



    inline void displayInfo(){
            cout << "Enter Emp. Id = ";
            cin  >> empID;
            cout << "Enter Emp. Name = ";
            cin >>  name;
            cout << "Enter Emp. Department = ";
            cin  >> department;
            cout << "Enter Emp. salary = ";
            cin  >> salary;
    }

    static void showTotalEmployees(){
       cout << "\nTotal Employees Created " << empCount <<  endl
    }

};
int Employee::empCount = 0;

int main(){
    Employee e1(101, "Chotu", "CSE",50000);
    Employee e2(102, "Rk", "CSE",60000);
    Employee e3(103, "Ak", "CSE",70000);

    cout << "Employee Detailes ";
    cout <<  endl;

    e1.displayInfo();
    e2.displayInfo();
    e3.displayInfo();
    cout << endl;
    Employee::showTotalEmployees();
}

