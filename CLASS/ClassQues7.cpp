#include<iostream>
using namespace std;

class Z {
public:
    Z() {
        cout << "Constructor called" << endl;
    }
    ~Z() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    cout <<"Enter Number: ";
    int n;
    cin >> n;
    Z* arr = new Z[n];
    delete[] arr;
    return 0;
}
