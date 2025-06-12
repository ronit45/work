#include <iostream>
using namespace std;

struct Node {
    int data;      
    Node* next;     
};

struct Stack {
    Node* top;      
    Stack() {
        top = NULL;  
    }

    
    void push(int value) {
        Node* newNode = new Node();  
        newNode->data = value;       
        newNode->next = top;         
        top = newNode;               
        
    }

   
    void pop() {
        if (top == nullptr) {
            cout << "Stack is empty. Cannot pop." << endl;
            return;
        }
        Node* temp = top;            
        top = top->next;             
        cout << "Popped " << temp->data << " from the stack." << endl;
        delete temp;
    }

    
    int peek() {
        if (top == nullptr) {
            cout << "Stack is empty." << endl;
            return -1;  
        }
        return top->data;           
    }

    bool isEmpty() {
        return top == nullptr; 
    }   

int getElement(Stack &s,int i) {
    Stack tempStack;
    int retrievedElement = -1;

    
    for (int index = 0; index <= i; index++) {
        if (s.isEmpty()) {
            cout << "Stack doesn't have enough elements!" << endl;
            return -1; 
        }

        if (index == i) {
            
            retrievedElement = s.peek();
        } else {
            tempStack.push(s.peek());
        }
        s.pop();

    }

    return retrievedElement;
    }
  
};
int main() {
    Stack s; 

   
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    cout<<"Enter ith element"<<endl;
    int i;
    cin>>i;

    cout<<s.getElement(s,i)<<endl;

    cout<<s.peek();
    

    return 0;
}
