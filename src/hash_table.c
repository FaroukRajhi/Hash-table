#include <stdlib.h>
#include <string.h>

#include "hash_table.h"

// Initialise a function that allocates a chunk of memory the size of an ht_item and saves a copy of the strings k and v in the new chunk of memory.
//

static ht_item* ht_new_item(const char* k, const char* v)
{
	ht_item* i = malloc(sizeof(ht_item));
	i->key = strdup(k);
	i->value = strdup(v);

	return i;
}


// Initialise a new hash table


ht_hash_table* ht_new()
{
	ht_hash_table* ht = malloc(sizeof(ht_hash_table));

	ht->size = 53; // Define how many items we can store.
        ht->count = 0;
	ht->items= calloc((size_t)ht->size, sizeof(ht_item*));

	return ht;
}

static void ht_del_item(ht_item* i)
{
	// Function that delete hash-table items and free the allocated memory 
	// Preventing memory leaks
	free(i->key);
	free(i->value);
	free(i);
}


void ht_del_hash_table(ht_hash_table* ht)
{
	for(int i = 0; i < ht->size; i++)
	{
		ht_item* item = ht->items[i];
		if(item != NULL){
			ht_del_item(item);
		}
	}

	free(ht->items);
	free(ht);
}

// Hash Function 

static int ht_hash(const char* s, const int a, const int m)
{
	long hash = 0;
	const int s_len = strlen(s);
	for(int i = 0; i< s_len; i++)
	{
		hash += (long)pow(a,s_len -(i+1)) *s[i];
		hash = hash  % m;
	}

	return (int)hash;
}

int main()
{
	ht_hash_table* ht = ht_new();
        ht_del_hash_table(ht);


	return 0;
}
