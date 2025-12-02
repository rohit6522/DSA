#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number:- ";
    cin >> n;

    int power=1;
    int store = 0;
    while(n>0){
        int ld = n % 2;
        store += ld * power;
        power*=10;
        n/=2;
    }
    cout << store;
    
}