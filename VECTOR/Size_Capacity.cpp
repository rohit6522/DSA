#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> n;

    cout << "Size of " << n.size() << endl;
    cout << "Capcity = " << n.capacity() <<  endl;

    n.push_back(1);
    cout << "Size of " << n.size() << endl;
    cout << "Capcity = " << n.capacity() <<  endl;
    

}

