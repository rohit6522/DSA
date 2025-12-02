#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter Size Of arr = ";
    cin >> n;
    vector<int>array(n);

    cout << "Enter No. Of Elements = ";
    for(int i=0;i<array.size();i++){
        cin >> array[i];
    }
    cout << "Enter target = " << endl;
    int ts;
    cin >> ts;
    
    int pairs=0;
    for(int i=0;i<array.size();i++){
        for(int j=i+1;j<array.size();j++){
            for(int k=j+1;k<array.size();k++){
                if(array[i]+array[j]+array[k]==ts){
                    pairs++;
                }
            }
        }
    }
    cout << "Pairs = "<< pairs;

}