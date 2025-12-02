#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout << "Enter Size Of an Array ";
    cin >> n;

    vector<int>arr(n);

    cout << "Enter Elements = ";
    for(int i=0;i<arr.size();i++){
        cin >> arr[i];
    }
    int first=0;
    int last = n-1;
    while(first < last){
        int temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        first++;
        last--;
    }

    cout << "Reverse = ";
    for(int i=0;i<arr.size();i++){
            cout << arr[i] << " ";
        }

    return 0;
}