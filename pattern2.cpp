#include <iostream>
using namespace std;

//      1
//     121
//    12321
//   1234321
//  123454321

int main(){
    int n;
    cout << "Enter number:- ";
    cin >> n;

    for(int i=1; i<=n;i++){
        for(int j=i;j<=n;j++){
            cout  << " ";
        }
        for(int j=1; j<=i; j++){
            cout << j;
        }
        for(int j=i-1; j>=1; j--){
            cout << j;
        }
        cout << endl;
    }
}