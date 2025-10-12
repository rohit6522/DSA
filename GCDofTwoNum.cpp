#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Enter first num ";
    cin >> a;

    cout << "Enter second num ";
    cin >> b;
    int gcd = 0;

    for(int i=1; i<=(a/2,b/2);i++){
        if(a % i == 0 && b % i == 0){
            gcd = i;
        }

    }
    cout << "G.C.D = " << gcd;
}