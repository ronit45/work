
// Definition for a Node.


#include<iostream>
using namespace std;
class Solution {
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
private:
    void insertattail(Node* &head, Node* &tail,int d){
        Node* newnode=new Node(d);
        if(head==NULL){
            head= newnode;
            tail= newnode;
        }
        else{
        tail->next=newnode;
        tail=newnode;
        }
    }
public:
    Node* copyRandomList(Node* head) {
        //create a clone list
        Node* clonehead=NULL;
        Node* clonetail=NULL;
        Node* temp= head;
        while(temp!=NULL){
            insertattail(clonehead,clonetail,temp->val);
            temp=temp->next;
        }
        //Clone list link to original list

        Node* original=head;
        Node* clone= clonehead;
        while(original != NULL && clone != NULL){
        Node* next = original->next;
        original->next= clone;
        original=next;

        next= clone->next;
        clone->next = original;
        clone = next;
        }
        //random pointer copy
        temp= head;

        while(temp!= NULL){
            if(temp->next != NULL){
                temp->next->random=temp->random ? temp->random->next :temp->random;
            }
            temp=temp->next->next;
        }
        //revert changes done in step 2
        original =head;
        clone =clonehead;
        while(original != NULL && clone != NULL){
            original->next=clone->next;
            original= original->next;

            if(original!=NULL){
                clone->next = original->next;
            }
            clone = clone->next;
            
        }
        //return ans
        return clonehead;

    }
};
int main(){

}