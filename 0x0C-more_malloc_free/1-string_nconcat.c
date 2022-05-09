#include "main.h"
#include <stdlib.h>

/**
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr_m = malloc(sizeof(s1) + sizeof(s2));

	if (ptr_m == NULL)
	{
		return (NULL);
	}
	else if (n >= sizeof(s2))
	{
		ptr_m = s1;
		*ptr_m = *ptr_m + *s2;
	}
	ptr_m = s1;
	return (ptr_m);
}
