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

    int x = arr.size();

    int t;
    cout << "Enter Target = ";
    cin >> t;

    int first=0;
    int last = x-1;
    int y=-1;

    while(first <= last){
        int mid = (first+last)/2;
        if(arr[mid] == t){
            y = mid;
            last = mid-1;
        }
        else if(arr[mid] < t){
            first = mid+1;
        }else{
            last = mid - 1;
        }
    }
    if(y != -1){
        cout << "Element " << t << " found at index = " << y << endl; 
    }else{
        cout << "Not found";
    }
    
    return 0;
}