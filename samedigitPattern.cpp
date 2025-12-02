#include<iostream>
using namespace std;

int main(){
    int r;
    cout << "Enter  no. ";
    cin >> r;

    int c;
    cout << "Enter  no. ";
    cin >> c;



    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout << j;
        }
        cout << endl;
    }

}