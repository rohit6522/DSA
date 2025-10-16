#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Enter size of array =6
// Enter number Of Element = 2 3 5 7 6 1
//  Ans = 6

int main(){
    int n;
    cout << "Enter size of array =";
    cin >>  n;

    vector <int>array(n);

    cout << "Enter number Of Element = ";
    for(int i=0;i<array.size();i++){
        cin >> array[i];
    }
    
    sort(array.begin(),array.end());

    int s = array[n-1];
    int t;

    for(int i=0;i<array.size();i++){
        if(array[i]<s){
            t=array[i];
        }
    }
    cout << " Ans = " <<  t;

}
