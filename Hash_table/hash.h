#ifndef HASH_H 
#define HASH_H

#include <stdio.h>
#include<string.h>
#include<stdlib.h> 
#include<stdbool.h> 


#define table_size 100000 
#define NAME_MAX 100


//Data to  put in the table 
typedef struct
{
	char type_name[NAME_MAX]; 
	int bytes; 

}types;


types *primitives_table[table_size]; 

void init_table(types *t[]);
void print_table(types *t[]);
bool insert_table(types *new_type, types *t[]);
unsigned int hash(const char *key); 
bool search_table(char *s,types *t[]);




#endif