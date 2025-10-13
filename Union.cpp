#include<iostream>
#include <cstring>
using namespace std;
union geek{
    int id;
    int sal;
    int age;
    char name[30];
};

int main(){
    union geek g2;

    g2.id = 1;
    cout << "I.D = " << g2.id << endl;

    strcpy(g2.name,"Rohit");
    cout << "Name = " << g2.name << endl;

    g2.sal = 100000;
    cout << "Salary = " << g2.sal << endl;

    g2.age = 20;
    cout << "Age = " << g2.sal << endl;
}