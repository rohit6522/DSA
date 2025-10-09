#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number:- ";
    cin >> n;

    int i=2;
    int count =0;
    do{
        if(i%2==0){

            cout << " " << i << endl;
            count++;
        }
        i++;
    }while(i<=n);
    cout << "Total Even No. " << count << endl;
    return 0;
}