#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string key;
    int value;
    Node* next;

    Node(string k, int v) {
        key = k;
        value = v;
        next = nullptr;
    }
};


class HashTable {
private:
    Node** buckets;
    int size;

public:
    // Constructor
    HashTable(int s) {
        size = s;
        buckets = new Node*[size];

        for (int i = 0; i < size; i++) {
            buckets[i] = nullptr;
        }
    }

    // Simple hash function
    int hashFunction(const string& key) {
        int hash = 0;
        for (char ch : key) {
            hash += ch;
        }
        return hash % size;
    }

    // Insert key-value pair
    void insert(const string& key, int value) {
        int index = hashFunction(key);

        Node* newNode = new Node(key, value);
        newNode->next = buckets[index];
        buckets[index] = newNode;
    }

    // Search value by key
    bool search(const string& key, int& result) {
        int index = hashFunction(key);
        Node* temp = buckets[index];

        while (temp != nullptr) {
            if (temp->key == key) {
                result = temp->value;
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    // Destructor (to avoid memory leaks)
    ~HashTable() {
        for (int i = 0; i < size; i++) {
            Node* curr = buckets[i];
            while (curr != nullptr) {
                Node* next = curr->next;
                delete curr;
                curr = next;
            }
        }
        delete[] buckets;
    }
};

int main() {
    HashTable ht(5);

    ht.insert("apple", 10);
    ht.insert("banana", 20);
    ht.insert("grape", 30);

    int value;
    if (ht.search("banana", value)) {
        cout << "Value found: " << value << endl;
    } else {
        cout << "Key not found" << endl;
    }

    return 0;
}

