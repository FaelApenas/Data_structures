#include "hash.h"



//types *primitives_table[table_size]; 



int main(int argc, char**argv)
{
	init_table(primitives_table);

	types int_8_y= {.type_name="Int8",.bytes=1}; 
	types int_16_y= {.type_name="Int16",.bytes=2};
	types int_32_y= {.type_name="Int32",.bytes=4};  
	types float_y= {.type_name="Float",.bytes=4}; 
	types double_y= {.type_name="Double",.bytes=8}; 


	insert_table(&int_8_y,primitives_table);
	insert_table(&int_16_y,primitives_table);
	insert_table(&int_32_y,primitives_table);
	insert_table(&float_y,primitives_table);
	insert_table(&double_y,primitives_table);



	print_table(primitives_table); 

	return 0; 
}


void init_table(types *t[] )
{
	for(int i =0 ; i<table_size; i++ )
	{
		t[i]= NULL; 

	}

}

void print_table(types *t[])
{
	for(int i =0; i<table_size;i++)
	{
		if(t[i]!=NULL)
		{	
			printf("[%d]",i);
			printf("primitive -> %s [%d]\n",t[i]->type_name,t[i]->bytes );
		}
	}

}

bool insert_table(types *new_type, types *t[])
{
	int index= hash(new_type->type_name); 

	if (new_type==NULL) return false; 
	if (t[index]!=NULL)
	{
		printf("This position is already occupied");
		return false; 
	}

	t[index]= new_type; 

}


 unsigned int hash(const char *key)
{
	unsigned int hash_val ; 
	int len= strlen(key); 

	for(int i =0; i<len; i++)
	{
		hash_val = hash_val *12 *key[i] ; 
	}

	hash_val = hash_val % table_size; 
	return hash_val; 

} 
