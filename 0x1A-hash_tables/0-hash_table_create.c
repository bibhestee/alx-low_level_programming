#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table of the size specified
 * @size: size of the hash table creatd
 * Description: Hash table of size specified is created
 *                and each has two members.
 * The first member is the size i.e to represent the index of the key.
 * The second member is the pointer to the first element on that index.
 *
 * Return: Returns a pointer to the hash_table
 *          or NULL if memory is not allocated.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = calloc(size, sizeof(hash_table_t));

	/* Check if hash_table is successfully created */
	if (hash_table == NULL)
	{
		return (NULL);
	}

	return (hash_table);
}
