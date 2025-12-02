#include<iostream>
using namespace std;

class Array {
public:
    int arr[100];   
    int length;     

    
    Array(int len = 0) {
        length = len;
    }

  
    void setvalue(int index, int val) {
       
            arr[index] = val;
       
    }

    
    void getvalue(int index) {

            cout << "Value = " << arr[index] << endl;
       
    }

  
    void getlength() {
        cout << "Length = " << length << endl;
    }

  
    ~Array() {
        cout << "Deleted the array";
    }
};

int main() {
    Array a(5);

    a.setvalue(0, 10);
    a.setvalue(1, 20);

    a.getvalue(0);
    a.getvalue(1);

    a.getlength();

    return 0;
}