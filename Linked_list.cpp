#include <iostream> 

using namespace std; 


class node{
    
public:
    int val; 
    node *next;
    
};



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



int main(){
    node *head= new node(); 
    insert_next(&head,-1); 
    insert_next(&head,20); 
    insert_next(&head,10); 

    print_list(head); 
 


    

}