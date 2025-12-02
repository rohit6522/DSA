#include<iostream>
using namespace std;

int sum(int num1 , int num2){
    int add = num1 + num2;
    return add;
}

int main(){
    int a,b;
    cout << "Enter Number:- ";
    cin >> a;
    cout << "enter Number:- ";
    cin  >>b;

    
    sum(a,b);
}

