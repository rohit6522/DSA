#include<iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter a number:- ";
    cin >> x;

    int rev = 0;
    int original_val = x;
    while(x!=0){
        int last_digit = x % 10;
        rev = rev * 10 + last_digit;
        x/=10;
    }
    if(original_val == rev){
        cout << "Palindrome Number ";
    }else{
        cout << "Not Pelindrome Number ";
    }
}

