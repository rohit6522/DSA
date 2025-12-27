#include<iostream>
using namespace std;

class stack{
    int *arr;
    int size;
    int top;

    stack(int sz){
        size = sz;
        arr= new int[size];
        top = -1;
    }
    
};

