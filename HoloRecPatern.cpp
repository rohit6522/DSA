#include<iostream>
using namespace std;

int main(){
    int r;
    cout << "Enter row n number:- ";
    cin >> r;

    int c;
    cout << "Enter col b number:- ";
    cin >> c;
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            if(i == 1 || i == r || j == 1 || j == c){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}