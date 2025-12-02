#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    // cout << sizeof(arr) << endl;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Size of arr = " << size << endl;

    for(int idx=0;idx<size;idx++){
        cout << arr[idx] << endl;
    }

    // for each loop 
    
    for(int ech:arr){
        cout << ech << endl;
    }
    return 0;

    
}