#include<iostream>
using namespace std;

// 123456
// 1    6
// 1    6
// 1    6
// 1    6
// 123456

int main(){
    int r;
    cout << "Enter row  no. ";
    cin >> r;

    int c;
    cout << "Enter col no. ";
    cin >> c;

    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(i == 1 || i == r || j == 1 || j == c){
                cout << j;
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }

}