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


bool search(node* head,int key){
    node*temp=head;
    while (temp!=NULL){
       if(temp->data==key){
           return true;
       }
       temp=temp->next;
    }
    
}
void deleteAThead(node* &head){
    node* todelete=head;
    head=head->next;

    delete todelete;
}



void deletion(node* &head,int val){
if(head==NULL){
    return;
}
if(head->next==NULL){
    deleteAThead(head);
}


node* temp =head;
while(temp->next->data !=val){
    temp=temp->next;
}
node* todelete=temp->next;
temp->next=temp->next->next;
  
  delete todelete;


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
        
        deletion(head,1);
        deleteAThead(head);

        display(head);
        cout<<search(head,5)<<endl;


    }
    
