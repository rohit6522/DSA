#include <bits/stdc++.h>
using namespace std;





void insertMaxHeap(int heap[], int &n, int key) {
    n++;
    int i = n - 1;
    heap[i] = key;

    while(i > 0 && heap[(i - 1) / 2] < heap[i]) {
        swap(heap[i], heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

int main() {
    int heap[100];
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) 
        cin >> heap[i];

    int key;
    cin >> key;

    insertMaxHeap(heap, n, key);

    for(int i = 0; i < n; i++)
        cout << heap[i] << " ";
}
