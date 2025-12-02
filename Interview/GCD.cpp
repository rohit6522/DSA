#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout << "Enter digit ";
    cin >> n;
    cout << "Enter Second Digit ";
    cin >> m;

    int gcd = 1;
    for(int i=1;i<=((n/2),(m/2));i++){
        if(n%i==0 && m%i==0){
            gcd = i;
        }
    }
    cout << "G.C.D = " << gcd;
    
}