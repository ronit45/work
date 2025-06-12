#include<iostream>
#include<map>
using namespace std;
class node{
    public:
    int data;
    node* next;

    //constructor
    node(int d){
        this->data=d;
        this ->next=NULL;
    }
    ~node(){
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory is free"<<val<<endl;
    }
};
void insertnode(node* &tail,int element,int d){
    //assume element is present
    if(tail==NULL){
        node* newnode=new node(d);
        tail=newnode;
        newnode->next=newnode;
    }
    else{
        //non empty
        node* curr= tail;
        while(curr->data!= element){
            curr= curr->next;
        }
        //element found curr is representing element
        node* temp= new node(d);
        temp->next= curr ->next;
        curr->next= temp;
    }
}
void deleteelement(int value,node* &tail){
    //
    if(tail==NULL){
        cout<<"empty list"<<endl;
        return;
    }
    else{
        node* prev=tail;
        node* curr=prev->next;

        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next= curr->next;
        if(curr==prev){
            tail=NULL;
        }

        else if(tail==curr){
            tail=prev;
        }
        curr-> next= NULL;
        delete curr;
    }
}
void printt(node* tail){
    node* temp=tail;
    if(tail==NULL){
        cout<<"list is empty"<<endl;
    }
    do{
        cout<<tail->data<<" ";
        tail= tail->next;
    }while(tail!=temp);
    cout<<endl;
}

bool detectcircular(node* head){
    if(head==NULL){
        return false;
    }
    map<node*,bool> visited;
    node* temp= head;
    while(temp!=NULL){
        if(visited[temp]== true){
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}
node*  floyd(node* head){
    if(head==NULL){
        return NULL;
    }
    node* slow= head;
    node* fast= head;
    
    while(slow !=NULL && fast!= NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow= slow->next;
        if(slow== fast){
            return slow;
        }
    }
return NULL;    
}

int main(){
    node* node1= new node(10);
    node* head = node1;
    node* tail= NULL;

    insertnode(tail,5,3);
    insertnode(tail,3,5);
    insertnode(tail,3,6);
    //printt(tail);
    //deleteelement(3,tail);
    printt(tail);
   if( floyd(head)){
    cout<<"true";
   }
   else{
    cout<<"false";
   }


}