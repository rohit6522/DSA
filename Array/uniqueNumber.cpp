#include<iostream>
#include<vector>
using namespace std;

int main(){

// Enter Size Of arr 7
// Enter Number Of Elements 
// 2 3 1 3 2 4 1
// Unique number is = 4


    int n;
    cout << "Enter Size Of arr ";
    cin >> n;
    vector<int>array(n);

    cout << "Enter Number Of Elements " << endl;
    for(int i=0;i<array.size();i++){
        cin >> array[i];
    }

    for(int i=0;i<array.size();i++){
        for(int j=i+1;j<array.size();j++){
            if(array[i]==array[j]){
                array[i]=array[j]=-1;
            }
        }
    }
    int uni=0;
    for(int i=0;i<array.size();i++){
        if(array[i]>0){
            uni=array[i];
        }
    }
    cout << "Unique number is = " << uni;

}