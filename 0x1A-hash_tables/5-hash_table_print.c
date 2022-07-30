#include "hash_tables.h"

/**
 *
 *
 *
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_table_t *current;
	hash_node_t *temp;
	unsigned long int i, size;

	/* Check if ht is valid */
	if (ht != NULL)
	{
		size = ht->size;
		current = (hash_table_t *)ht;
		printf("{");
		for (i = 0; i < size; i++)
		{
			if (current->array[i] != NULL)
			{
				printf("'%s':", current->array[i]->key);
				printf(" '%s'", current->array[i]->value);
				if (current->array[i]->next != NULL)
				{
					temp = current->array[i]->next;
					while (temp != NULL)
					{
						printf(", '%s': '%s'", temp->key, temp->value);
						temp = temp->next;
					}
				}
			}
		}
		printf("}\n");
	}
}
