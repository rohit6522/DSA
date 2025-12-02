#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,5,6,4,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;

    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    cout << "Sum = " << sum;
}