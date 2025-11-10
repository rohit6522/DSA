#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter num:- ";
    cin >> n;

    int power=1;
    int store=0;
    while(n>0){
        int ld = n%10;
        store += ld * power;
        power*=2;
        n/=10;
    }
    cout << store;
}