//inserting deleting and modifying of singly linked list
#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    //constructor
    node(int data){
    this->data=data;
    this->next=NULL;
    }
    //destructor
    ~node(){
        int value=this->data; 
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node"<<value<<endl;
    }
};
void insertathead(node* &head,int d){
    node* temp=new node(d);
    temp ->next=head;
    head=temp;
} 

void insertattail(node* &tail,int d){
    node* temp=new node(d);
    tail->next=temp;
    tail=temp;
}


void insertatmid(node* &tail,node* &head,int position,int d){
    if(position==1){
        insertathead(head,d);
        return;
    }
    node*temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    if(temp->next==NULL){
        insertattail(tail,d);
        return;
    }

    //creating a node for d
    node* ithnode=new node(d);
    ithnode->next=temp->next;
    temp->next=ithnode;
}


void deletenode(node* &head,int position){
    //deleting first node
    if(position==1){
        node* temp=head;
        head = head->next;
        //memory free at start node
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting any middle node
        node* curr= head;
        node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
void print(node* &head){
    node* temp=head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
node* node1=new node(10);

node* head = node1;
node* tail = node1;
print(head);

insertattail(tail,12);
print(head);
insertattail(tail,15);
print(head);

insertatmid(tail,head,4,22);
print(head);
cout<<head->data<<endl;
cout<<tail->data<<endl;
deletenode(head,3);
print(head);


}