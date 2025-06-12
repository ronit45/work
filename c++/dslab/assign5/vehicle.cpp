#include <bits/stdc++.h>
using namespace std;

struct Node {
    string regNumber;
    Node* next;
};

void insert(Node* &head, string &regNumber) {
    Node* newNode = new Node{regNumber, nullptr};
    if (!head) head = newNode;
    else {
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void display(Node* head) {
    while (head != nullptr) {
        cout << head->regNumber << '\n';
        head = head->next;
    }
}                       

int main() {

    #ifndef ONLINE_JUDGE
    freopen("vehicle-input.txt", "r", stdin);
    freopen("vehicle-output.txt", "w", stdout);
    #endif

    Node* jharkhandV = nullptr;
    Node* remV = nullptr;

    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    vector<string> regNumbers(n);
    for(int i=0; i<n; i++) {
        cin >> regNumbers[i];
    }

    for (auto &s : regNumbers) {
        if (s.substr(0,2) == "JH") {
            insert(jharkhandV, s);
        } 
        else {
            insert(remV, s);
        }
    }

    cout << "Jharkhand Vehicles: " << '\n';
    display(jharkhandV);

    cout << "\nOther State Vehicles: " << '\n';
    display(remV);

    while (jharkhandV != nullptr) {
        Node* temp = jharkhandV;
        jharkhandV = jharkhandV->next;
        delete temp;
    }
    while (remV != nullptr) {
        Node* temp = remV;
        remV = remV->next;
        delete temp;
    }
}