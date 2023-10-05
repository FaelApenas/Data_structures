#include <iostream> 

using namespace std; 


class node{
    
public:
    int val; 
    node *next;
    
};

void print_list(node *n){
    while(n!=NULL){

        cout<< "Value" << n->val << endl; 
        n=n->next;
        
    }
}

int main(){
    

}