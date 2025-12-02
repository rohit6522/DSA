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
    int larg=-1;

    for(int i=0;i<n;i++){
        if(arr[i]>larg){
            larg = arr[i];
        }
    }

    cout << "lasrgest = " << larg;
   
    return 0;
}