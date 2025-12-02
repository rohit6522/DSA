#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
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
    bool found = false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                cout << arr[i] << " ";
                found = true;
                break;
            }
        }
    }

    // optimise solution o(n)

    unordered_map<int,int>mp;
    for(int n:arr){
        mp[n]++;
    }
    bool dup = false;

    for(auto x : mp){
        if(x.second > 1){
            cout << x.first << " ";
            found = true;
        }
    }
   
    return 0;
}

