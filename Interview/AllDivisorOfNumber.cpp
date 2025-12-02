#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout << "Enter digit ";
    cin >> n;

    vector<int>v;

    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
        }
        if(i != n/i){
            v.push_back(n/i);
        }
        sort(v.begin(),v.end());
    }
    cout << "Divisors = " << n << endl;
    for(auto x:v){
        cout << x << " ";
    }
    return 0;
}