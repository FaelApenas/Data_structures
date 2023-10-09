#include <iostream> 
#include "Linked_list.h"


using namespace std; 


int main(){
    node *list= new node(); 
    
    init_list(&list); 
    insert_head(&list, 5);
    insert_head(&list, 3); 
    insert_head(&list, 2); 
    insert_head(&list, 1); 
 
    print_list(list); 
 


    

}