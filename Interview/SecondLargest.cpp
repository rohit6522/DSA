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
    int seclarg=-1;

    for(int i=0;i<n;i++){
        if(arr[i]>larg){
            seclarg = larg;
            larg = arr[i];
        }else if(arr[i]>seclarg && arr[i] > larg){
            seclarg = arr[i];
        }
    }

    cout << "Second lasrgest = " << seclarg;
   
    return 0;
}