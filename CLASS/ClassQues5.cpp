#include<iostream>
using namespace std;

// class factorial{
//     public:
//     int fact(int n){
//     if(n == 0){
//         return 1;
//     }
//     return n*fact(n-1);
// }
// };
// int main(){
//     int n;
//     cout << "Enter number = ";
//     cin >> n;
//     factorial obj;

//     int x = obj.fact(n);
//     cout << "Fact = " << x;
//     return 0;
// }



//// fibonacci 

class Fiboo{
    public:
    int fab(int f){
        if(f == 0){
            return 1;
        }else if(f == 1){
            return 1;
        }else{
            return fab(f-1) + fab(f-2);
        }
    }
};

int main(){
    int f;
    cout << "Enter number = ";
    cin >> f;
    Fiboo obj;
    int x = obj.fab(f);
    cout << "Fibbo = " << x;
    return 0;
}

