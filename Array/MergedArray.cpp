#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&arr,vector<int>&arr1,vector<int>&merged ){
    int i=0,j=0;
    while(i<arr.size() && j<arr1.size()){
        if(arr[i] < arr1[j]){
            merged.push_back(arr[i]);
            i++;
        }else{
            merged.push_back(arr1[j]);
            j++;
        }
    }

    while(i<arr.size()){
        merged.push_back(arr[i]);
        i++;
    }
    while(j<arr1.size()){
        merged.push_back(arr1[j]);
        j++;
    }
    
}

int main(){
    int n;
    cout << "Enter Size Of Arr= ";
    cin >> n;
    vector<int>arr(n);

    cout << "Enter first  Array  = ";
    for(int i=0;i<arr.size();i++){
        cin >> arr[i];
    }

    int p;
    cout << "Enter Size Of Second Arr1 = ";
    cin >> p;
    vector<int>arr1(p);

    cout << "Enter Second Array = ";
    for(int i=0;i<arr1.size();i++){
        cin >> arr1[i];
    }

    vector<int>merged;
    merge(arr,arr1,merged);
    
    cout << "Sorted Array is = ";
    for(int i=0;i<merged.size();i++){
        cout << merged[i]<<" ";
    }
    cout << endl;

    
}
