#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter digit ";
    cin >> n;
    int ld=0;
    int rev=0;
    while(n!=0){
        int ld = n%10;
        rev = rev * 10 + ld;
        n/=10;
    }
    cout << "Reverse = " << rev;
    return 0;
}