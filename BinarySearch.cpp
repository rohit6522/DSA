#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter Size = " ;
    cin >> n;
    

    vector<int>arr(n);
    cout << "Enter Elements = ";
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }
    int target;
    cout << "Enter target = ";
    cin >> target;
    

    int first=0;
    int last = arr.size()-1;

    while(first <=last){
        int mid = first + (last - first)/2;

        if(arr[mid] == target){
            cout << "Element found at index " << mid << endl;
            break;
        }
        else if(arr[mid] < target){
            first = mid + 1;
        }
        else{
            last = mid - 1;
        }
    }
    return 0;
}
