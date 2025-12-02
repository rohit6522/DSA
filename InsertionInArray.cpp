#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter Size of array = ";
    cin >> n;

    
    vector<int>arr(n);
    cout << "Enter Elelements == ";
    for(int i=0;i<arr.size();i++){
        cin >>  arr[i];
    }

    int pos;
    cout << "Enter Position Value = ";
    cin >> pos;

    int value;
    cout << "Enter Value = ";
    cin >> value;

    arr.resize(n+1);

    for(int i=n-1;i>pos;i--){
        arr[i+1] = arr[i];
    }

    arr[pos] = value;

    cout << "After Insertion = ";
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }

}