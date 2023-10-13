#include <iostream>  

class node{
    
public:
    int val; 
    node *next; // pointer to the next node 
    
};

void init_list(node **n); 
int get_lenght( node *n);
void print_list( node *n);
void insert_head( node **head, int newval);
node * reverse(node *head); 