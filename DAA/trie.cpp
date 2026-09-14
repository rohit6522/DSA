
#include <iostream>
#include <string>
using namespace std;

class TrieNode {
public:
    TrieNode* children[26];
    bool isEnd;

    TrieNode() {
        for (int i = 0; i < 26; i++)
            children[i] = nullptr;

        isEnd = false;
    }
};

class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* current = root;

        for (char ch : word) {
            int index = ch - 'a';

            if (current->children[index] == nullptr)
                current->children[index] = new TrieNode();

            current = current->children[index];
        }

        current->isEnd = true;
    }

    // Search for a complete word
    bool search(string word) {
        TrieNode* current = root;

        for (char ch : word) {
            int index = ch - 'a';

            if (current->children[index] == nullptr)
                return false;

            current = current->children[index];
        }

        return current->isEnd;
    }

    // Check whether a prefix exists
    bool startsWith(string prefix) {
        TrieNode* current = root;

        for (char ch : prefix) {
            int index = ch - 'a';

            if (current->children[index] == nullptr)
                return false;

            current = current->children[index];
        }

        return true;
    }
};

int main() {
    Trie trie;

    trie.insert("apple");
    trie.insert("app");
    trie.insert("bat");

    cout << boolalpha;

    cout << "Search apple: "
         << trie.search("apple") << endl;

    cout << "Search app: "
         << trie.search("app") << endl;

    cout << "Search ap: "
         << trie.search("ap") << endl;

    cout << "Prefix ap: "
         << trie.startsWith("ap") << endl;

    return 0;
}