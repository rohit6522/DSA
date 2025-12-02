#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter digit ";
    cin >> n;
    int original = n;
    int rev = 0;
    while(n!=0){
        int ld = n%10;
        rev = rev * 10 + ld;
        n/=10;
    }
    if(original == rev){
        cout << "Palindrom ";
    }else{
        cout << "Not Palindrom ";
    }
    return 0;
}