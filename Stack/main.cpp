#include <iostream> 
#include <stack> 

using namespace std; 

class node {
    public: 
        int val; 
        node *next; 

}; 

void init_stack(node **stack){*stack=NULL;}

void print_list(node *n){
    while(n!=NULL){

        cout<< "Value: " << n->val << endl; 
        n=n->next;
        
    }
}

void push(node **start, int newval){
    //Set the new node 
    node *new_node= new node(); 
    new_node->val= newval; 
    //---------------------------
    new_node->next= *start;
    *start=new_node; 

}

void pop(node *start){
    node *aux=start; 
    while(aux->next->next!=NULL){ 
        aux=aux->next;
    }
    aux->next=NULL; 

} 
int main(){ 

    node *stack =new node(); 
    init_stack(&stack); 
    push(&stack,5); 
    push(&stack,2); 
    push(&stack,3);
    push(&stack,10);  
    push(&stack,25); 
    print_list(stack); 

    pop(stack);

    print_list(stack); 



}