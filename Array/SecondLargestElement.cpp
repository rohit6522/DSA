#include<iostream>
#include<vector>
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

    int lar = INT16_MIN;
    int seclar = INT16_MIN;

    for(int i=0;i<arr.size();i++){
        if(arr[i] > lar){
            seclar = lar;
            lar = arr[i];
        }else if(arr[i] > seclar && arr[i] < lar){
            seclar = arr[i];
        }
    }
   
    cout << "Second Largest = " << seclar;
    

}