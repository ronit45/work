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

void insertattail(node* &tail,node*curr){
    tail->next=curr;
    tail=curr;
}
node* sortlist(node* head){
    node* zerohead= new node(-1);
    node* zerotail= zerohead;
    node* onehead= new node(-1);
    node* onetail= onehead;
    node* twohead= new node(-1);
    node* twotail= twohead;

    node* curr= head;
    while(curr!=NULL){
        int value= curr->data;
        if(value ==0){
            insertattail(zerotail,curr);
        }
        else if(value==1){
            insertattail(onetail,curr);
        }
        else if(value==2){
            insertattail(twotail,curr);
        }
        curr=curr->next;
    }
}


int main(){

}