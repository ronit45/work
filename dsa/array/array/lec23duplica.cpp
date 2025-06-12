#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string s) {
    int count[26] = {0};
    int size = s.length();
    
    // Calculate character frequencies
    for (int i = 0; i < 26; i++) {
        int index = s[i] - 'a';
        count[index]++;
    }
    for (int i = 0; i < 26; i++) {

        cout<<count[i];
    }
    
    // Remove duplicate characters
    int index = 0;
    while (index < 26) {
        if (count[index] >= 2) {
            char ch = 'a' + index;
            s.erase(s.find(ch), 1);
            cout<<s.find(ch);
            s.erase(s.find(ch), 1);
        }
        index++;
    }
    
    return s;
}

int main() {
    string s1 = "abbaca";
    s1 = removeDuplicates(s1); // Corrected: Assign the result back to s1
    cout << s1; // Output the modified string
}
