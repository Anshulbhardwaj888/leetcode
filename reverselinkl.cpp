#include<iostream>


using namespace std;

class node{

    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }

};
void insertAThead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}



void insertAttheEnd(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n; 
        return;
        }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
           }
    temp->next = n;
}



void display(node* head){
    node* temp = head;
    while (temp!= NULL){
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<"NULL"<<endl;
}

node* recusivereverse(node* &head){
    if(head==NULL){
    return NULL;
    }
    node* newhead= recusivereverse(head->next);
    head->next->next==head;
    head->next=NULL;
}
int main(){
        node* head = NULL;
        insertAttheEnd(head,1);
        insertAttheEnd(head,2);
        insertAttheEnd(head,3);
        insertAttheEnd(head,4);
        insertAThead(head,5);
        insertAThead(head,6);
        display(head);
        node* newhead= recusivereverse(head);
        display(newhead);
        return 0;
}