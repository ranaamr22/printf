#include "main.h"

int length(char *str)
{
	int i = 0;
	int len = 0;
	
	while (str[i])
	{
		len++;
		i++;
	}

	return (len);
}
