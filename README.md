# Hash-table
A hash table is a data structure which offers a fast implementation of the associative array API.
A hash table consists of an array of 'buckets', each of which stores a key-value pair. 

Hashing function returns an integer which used as the index in the array of buckets to retrieve a key-value pair: recieve its index, and use the index to find the key entries in the array.

Array indexing complexity O(1).

# API

The arrays are a collection of unordered key-value pairs which cannot be duplicated.

- search(a, k): return the value v associated with the key k from the array a.
- insert(a, k, v): store the pair k:v in the array a.
