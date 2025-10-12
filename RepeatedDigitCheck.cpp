#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number:- ";
    cin >> n;

    int digit;
    cout << "Enter digit :- ";
    cin >> digit;

    int count = 0;
    int stored = n;
    while(stored >0){
        int rem = stored % 10;
        if(rem == digit){
            count++;
        }
        stored/=10;
    }
    cout << count;
}