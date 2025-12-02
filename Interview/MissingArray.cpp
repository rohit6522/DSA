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

    int x = n+1;;
    int total = (x*(x+1)/2);
    int sum=0;

    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }

    int missing = total - sum;
    cout << "Missing Element is = " << missing;
    return 0;
}