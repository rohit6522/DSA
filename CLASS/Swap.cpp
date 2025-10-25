#include<iostream>
using namespace std;

// using third variable

int main(){
    int a,b;
    cout << "Enter first Value = ";
    cin >> a;

    cout << "Enter Second Value = ";
    cin >> b;

    cout << "Before Swaping = " << a <<  " " << b << endl;
    
    int c;
    c = b;
    b = a;
    a = c;

    cout << "After Swaping = " << a  << " " << b;


}




// Without using third variable

int main(){
    int a,b;
    cout << "Enter first Value = ";
    cin >> a;  // 2

    cout << "Enter Second Value = ";
    cin >> b; // 5

    cout << "Before Swaping = " << a <<  " " << b << endl;


    a = a + b; // 7
    b = a - b; // 2;
    a = a - b; // 5;

    cout << "After Swaping = " << a  << " " << b;

    

}