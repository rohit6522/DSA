#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,9,4,7,19};
    int max = arr[0];

    for(int i=1;i<5;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "Max = " << max;
}
