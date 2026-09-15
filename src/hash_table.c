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
/

ht_hash_table* ht_new()
{
	ht_hash_table* ht = malloc(sizeof(ht_hash_table));

	ht->size = 53; // Define how many items we can store.
        ht->count = 0;
	ht->items= calloc(
}
