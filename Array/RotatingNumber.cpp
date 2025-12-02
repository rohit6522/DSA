#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter size of arr = ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter Elements = ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k=2;
    k = k % n;

    rotate(arr.begin() , arr.begin() + (n-k) , arr.end());

    for(int i=0;i<n;i++){
        cout << arr[i];
    }
}
