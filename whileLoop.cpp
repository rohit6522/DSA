#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number:- " << endl;
    cin >> n;

    int i=1;
    int sum = 0;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout << sum;

    return 0;
}