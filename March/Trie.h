//
// Created by 李承彧 on 2023/3/17.
//

#ifndef LEETCODE_TRIE_H
#define LEETCODE_TRIE_H
#include <unordered_map>
using namespace std;
struct Trie{
    bool isWord;
    unordered_map<char,Trie*> child;
};

class Solution {
private:
    Trie* root;
public:
    trie();
    void insert(string word);
    bool search(string word);
    bool startsWith(string prefix);
};


#endif //LEETCODE_TRIE_H
