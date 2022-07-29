#include "hash_tables.h"

/**
 *
 *
 *
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	unsigned long int size;
	char *str;

	size = (*ht).size;
	index = key_index((unsigned char*)key, size);
	printf("%s\n", (*(ht[index].array))->key);

	if (ht[index].array != NULL)
	{
		str = (*(ht[index].array))->value;
		return (str);
	}
	else
	{
		return (NULL);
	}
}
