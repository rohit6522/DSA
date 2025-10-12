#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number:- ";
    cin >> n;

    int result=1;
    for(int i=1;i<=n;i++){
        result*=n;
    }
    cout << result;
    
}