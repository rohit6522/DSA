#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter row n number:- ";
    cin >> n;

    int b;
    cout << "Enter col b number:- ";
    cin >> b;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=b;j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}