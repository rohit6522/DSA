#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> n;

    for(int i=0;i<5;i++){
        int element;
        cin >> element;
        n.push_back(element);
    }
    

    for(int i=0;i<n.size();i++){
        cout << n[i]<<" ";

        
    }
    cout << endl;
    // add begin in second index
    n.insert(n.begin()+2,6);
    // for each loop

    for(int ele:n){
        cout << ele<<" ";
    }
    cout << endl;
    n.erase(n.end()-2);
}

