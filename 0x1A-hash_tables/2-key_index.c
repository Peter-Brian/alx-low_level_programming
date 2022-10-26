nclude "hash_tables.h"
/**
 * key_index - gives the index of a key
 * @key: is the key (the word passed to save in the hash table)
 * @size: is the size of the array of the hash table
 * Return: the index at which the key/value pair should be stored in the hashT
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (!size || !key)
		return (0);
	index = (hash_djb2(key) % size);
	return (index);
}
