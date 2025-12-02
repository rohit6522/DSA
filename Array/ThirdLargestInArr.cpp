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

    int lar = INT8_MIN;
    int seclar = INT16_MIN;
    int thirdlar = INT16_MIN;

    for(int i=0;i<arr.size();i++){
        if(arr[i] > lar){
            thirdlar = seclar;
            seclar = lar;
            lar = arr[i];
        }else if(arr[i] > seclar && arr[i] < lar){
            thirdlar = seclar;
            seclar = arr[i];

        }else if(arr[i] > thirdlar && arr[i] < seclar){
            thirdlar = arr[i];
        }
    }

    cout << "Third Largest = " << thirdlar;
}