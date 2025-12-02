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

    int t;
    cout << "Enter Target = ";
    cin >> t;

    cout << "Index = ";
    for(int i=0;i<arr.size();i++){
        if(arr[i] == t){
            cout << i ;
        }
    }
    
    return 0;
}