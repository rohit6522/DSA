#include<iostream>
using namespace std;

class Student{
    int roll;
    double fee;
    public:
    Student(int r = 5,double f = 500.00){
        roll = r;
        fee = f;
    }
    Student(const Student &other) {
        roll = other.roll;
        fee = other.fee;
    }
    
    void display(){
        cout << "Roll NO: " << roll << "&" << "Fees: " << fee << endl;
    }

};

int main(){
    int rollno;
    double fees;

    cin >> rollno;
    cin >> fees;

    Student obj(rollno,fees);
    cout << "Student Detailes : " << endl;
    obj.display();

    Student obj1 = obj;
    cout << "Copied Student Details : " << endl;
    obj1.display();

    return 0;

}