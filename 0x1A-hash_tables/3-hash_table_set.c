#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to be updated
 * @key: The key
 * @value: The key's value
 *
 * Return: 1 if succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	unsigned long int size;
	hash_node_t **ht_array = ht->array;

	/* Create new key */
	hash_node_t *new_key = create_key(key, value);

	/* Generate index for the element */
	size = ht->size;

	index = key_index((unsigned char *)key, size);
	/* Set new key to index position on hash table */
	if (ht_array[index] == NULL)
	{
		ht_array[index] = new_key;
		return (1);
	}
	else
	{
		new_key->next = ht_array[index];
		ht_array[index] = new_key;
		return (0);
	}
}


/**
 * create_key - create a new key with value
 * @key: The key
 * @value: The key's value
 *
 * Return: a pointer to the key if successful or NULL if not
 */

hash_node_t *create_key(const char *key, const char *value)
{
	hash_node_t *element;
	char *ele = strdup(key);
	char *str = strdup(value);

	/* Create the new element */
	element = malloc(sizeof(hash_node_t));

	/* Check if element is created successfully */
	if (element == NULL)
		return (0);

	/* Assign key and value to the new element */
	element->key = ele;
	element->value = str;
	element->next = NULL;

	return (element);
}
