#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}

int	main(int argc, char *argv[])
{
	if (argc > 2)
	{
		// when you don't control the UC, you must control the memory
		size_t dest_len = strlen(argv[1]);
		char * buffer = malloc(2 * dest_len);
		printf("original function result: %s\n", strcat(buffer, argv[2]));
		printf("remade function result: %s", ft_strcat(argv[1], argv[2]));
		free(buffer);
	}
	return (0);
}
