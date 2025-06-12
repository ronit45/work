#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype>

using namespace std;

const int MAX_NOISE_WORDS = 70;
const int INITIAL_WORD_CAPACITY = 100;

struct HashNode {
    string word;
    int count;
    HashNode* next;
};

class HashTable {
private:
    static const int TABLE_SIZE = 100;
    HashNode* table[TABLE_SIZE];

    int hashFunction(const string& word) {
        int hash = 0;
        for (char c : word) {
            hash = (hash * 31 + c) % TABLE_SIZE;
        }
        return hash;
    }

public:
    HashTable() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            table[i] = nullptr;
        }
    }

    void insert(const string& word) {
        int index = hashFunction(word);
        HashNode* entry = table[index];
        while (entry != nullptr) {
            if (entry->word == word) {
                entry->count++;
                return;
            }
            entry = entry->next;
        }
        HashNode* newNode = new HashNode{word, 1, nullptr};
        newNode->next = table[index];
        table[index] = newNode;
    }

    void getWordsAndCounts(HashNode*& words, int& wordCount) {
        wordCount = 0;
        for (int i = 0; i < TABLE_SIZE; i++) {
            HashNode* entry = table[i];
            while (entry != nullptr) {
                if (wordCount % INITIAL_WORD_CAPACITY == 0) {
                    HashNode* newWords = new HashNode[wordCount + INITIAL_WORD_CAPACITY];
                    if (wordCount > 0) {
                        for (int j = 0; j < wordCount; j++) {
                            newWords[j] = words[j];
                        }
                        delete[] words;
                    }
                    words = newWords;
                }
                words[wordCount] = *entry;
                wordCount++;
                entry = entry->next;
            }
        }
    }
};

void processFile(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Failed to open file!" << endl;
        return;
    }

    stringstream buffer;
    buffer << file.rdbuf();
    string speechText = buffer.str();
    file.close();

    string noiseWords[MAX_NOISE_WORDS] = {
        "a", "an", "the", "and", "but", "or", "nor", "for", "so", "yet", "at", "by", "with", 
        "on", "to", "from", "in", "of", "up", "down", "out", "about", "as", "is", "was", 
        "were", "be", "been", "being", "has", "have", "had", "do", "does", "did", "i", "you",
        "he", "she", "it", "we", "they", "this", "that", "these", "those", "which", "who", "whom",
        "me", "him", "her", "us", "them", "my", "your", "his", "her", "its", "our", "their", 
        "whose", "will", "shall", "may", "might", "must", "can", "could", "should"
    };

    HashTable hashTable;

    stringstream ss(speechText);
    string word;

    while (ss >> word) {
        for (char& c : word) {
            c = tolower(c);
        }
        string cleanedWord;
        for (char c : word) {
            if (!ispunct(c)) {
                cleanedWord += c;
            }
        }

        bool isNoiseWord = false;
        for (int i = 0; i < MAX_NOISE_WORDS; i++) {
            if (cleanedWord == noiseWords[i]) {
                isNoiseWord = true;
                break;
            }
        }
        if (!isNoiseWord && !cleanedWord.empty()) {
            hashTable.insert(cleanedWord);
        }
    }

    HashNode* words = nullptr;
    int wordCount = 0;
    hashTable.getWordsAndCounts(words, wordCount);

    for (int i = 0; i < wordCount - 1; i++) {
        for (int j = 0; j < wordCount - i - 1; j++) {
            if (words[j].count < words[j + 1].count) {
                HashNode temp = words[j];
                words[j] = words[j + 1];
                words[j + 1] = temp;
            }
        }
    }

    int topCount = min(10, wordCount);
    for (int i = 0; i < topCount; i++) {
        cout << words[i].word << ": " << words[i].count << endl;
    }

    delete[] words;
}

int main() {
    string filename = "bose-speech-full.txt";
    processFile(filename);
    return 0;
}