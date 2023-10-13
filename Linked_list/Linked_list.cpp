#include "Linked_list.h"

using namespace std; 

void init_list(node **n){*n=NULL; }

int get_lenght(node *n){
    int len=0; 
    node *aux= n; 
    while(aux!=NULL){
        len++; 
        aux=aux->next; 
    }
    return len;         
}

void print_list(node *n){
    while(n!=NULL){

        cout<< "Value: " << n->val << endl; 
        n=n->next;
        
    }
}

void insert_head(node **head, int newval){
    node *new_node= new node(); 
    new_node->val=newval; 

    
    new_node->next= *head; 
    *head= new_node; 
    
} 

void insert_next(node **head,int newval){
    //Setting the new node 
    node *new_node=new node(); 
    new_node->val=newval; 
    new_node->next=NULL; 
    //----------------

    //Verify if the list is empty
    if(*head==NULL){
        *head=new_node; 
        return;
    }
    //-------------

    //scroll through the list to add in the end
    node *aux = *head; 
    while(aux->next!=NULL){
        aux=aux->next; 
    }
    aux->next= new_node; 

    


}

node * reverse(node *head){
    node *temp= head; //actual node
    node *n= NULL; //next node
    node *p= NULL; //previous node


    while (temp !=NULL)
    {
        n= temp->next; 
        temp->next=p; 
        p=temp; 
        temp=n; 

    }
    head=p;    
    
    return head; 


     
}
 

