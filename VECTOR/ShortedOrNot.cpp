#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={1,2,7,4,5,6};
    bool sorflag=true;
    for(int i=0;i<6;i++){
        if(arr[i]>arr[i-1]){
            sorflag=false;
        }
    }
    cout << sorflag << endl;

}