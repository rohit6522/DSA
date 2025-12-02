#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter digit ";
    cin >> n;
    int count=0;
    while(n!=0){
        n/=10;
        count++;
    }
    cout << "digit = " << count;
}