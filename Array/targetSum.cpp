#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={3,4,6,7,1};
    int ts = 7;

    int pairs=0;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==ts){
                pairs++;
            }
        }
    }
    cout << "No of Pairs is " << pairs;
}


// with input taken;

int main(){
    int s;
    cout << "Enter Size of array:- ";
    cin >> s;

    vector<int>array(s);
    cout << "Enter Elements ";

    for(int i=0;i<array.size();i++){
        cin >> array[i];
    }

    int ts=7;
    int pairs = 0;
    for(int i=0;i<array.size();i++){
        for(int j=i+1;j<array.size();j++){
            if(array[i]+array[j]==ts){
                pairs++;
            }
        }
    }

    cout << "Pairs = " << pairs;
    

}