#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int>v(6);

    for(int i=0;i<6;i++){
        cin >>v[i];
        
    }

    cout << "Enter check number:- ";
    int c;
    cin >> c;

    int oc=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==c){
            oc=i;
        }
    }
    cout << oc;
}

