#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    int n;
    cout << "Enter number of number = ";
    cin >> n;

    vector<int>arr(n);
    cout << "Enter Elements = ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int target;
    cout << "Enter target = " << endl;
    cin >> target;

    sort(arr.begin(),arr.end());

    int low=0 , high=n-1;
    

    while(low <= high){
        int mid = low + (high-low)/2;
        
        if(arr[mid]==target){
            cout << "Found at index " << mid << endl;
            break;
        }else if(arr[mid] < target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    
    return 0;


}