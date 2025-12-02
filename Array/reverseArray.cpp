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

    int start = 0;
    int end = arr.size()-1;

    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    cout << "Reversed arr = ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

}