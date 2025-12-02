#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout << "Enter Size of arr = ";
    cin >> n;

    vector<int>arr(n);
    cout << "Enter Elements = ";

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int lar = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>lar){
            lar = arr[i];
        }
    }
    cout << "Largest Element = " <<  lar;

}