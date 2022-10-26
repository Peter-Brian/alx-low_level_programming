#include "hash_tables.h"

/**
 * hash_table_set - set key/value association in hastable
 *
 * @prmHashTable: hash table
 * @prmKey: key
 * @prmValue: value
 *
 * Return: 1 if success
 *         0 if failed
 */
int hash_table_set(
	hash_table_t *prmHashTable,
	const char *prmKey,
	const char *prmValue
) {
	int index = 0;
	hash_node_t *node, *new;

	if (prmHashTable == NULL || prmKey == NULL || prmValue == NULL)
		return (0);

	index = key_index((const unsigned char *) prmKey, prmHashTable->size);
	node = *(prmHashTable->array + index);

	while (node != NULL)
	{
		if (strcmp(prmKey, node->key) == 0)
		{
			free(node->value);
			node->value = strdup(prmValue);
			return (1);
		}
		node = node->next;
	}

	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (0);

	new->key = strdup(prmKey);
	new->value = strdup(prmValue);
	new->next = NULL;

	if (*(prmHashTable->array + index) != NULL)
		new->next = *(prmHashTable->array + index);
	*(prmHashTable->array + index) = new;

	return (1);
}
