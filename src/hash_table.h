typedef struct {

	// key-value pair items
	char* key;
	char* value;
} ht_item;


typedef struct {

	// array of pointers to items and details about its size.
	int size;
	int count;
	ht_item** items;

} ht_hash_table;
