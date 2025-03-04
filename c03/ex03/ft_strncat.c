#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	h;
	char	*ptr;

	h = 0;
	ptr = dest;
	while (*dest)
		dest++;
	while (h < nb && src[h])
	{
		dest[h] = src[h];
		h++;
	}
	dest[h] = '\0';
	return (ptr);
}

int	main(int argc, char *argv[])
{
	if (argc > 2)
	{
		int n = atoi(argv[3]);
		if (n < 0)
		{
			printf("Watch out for the size, it needs to be positive!");
		}
		else
		{
			// when you don't control the UC, you must control the memory
                	size_t dest_len = strlen(argv[1]);
                	size_t src_len = strlen(argv[2]);
                	char *buffer_dest = malloc(dest_len + src_len + 1);
			char *buffer_src = malloc(src_len);
			strcpy(buffer_dest, argv[1]);
			strcpy(buffer_src, argv[2]);
                	printf("original function result: %s\n", strncat(buffer_dest, buffer_src, n));
                	printf("remade function result: %s", ft_strncat(argv[1], argv[2], (unsigned int) n));
                	free(buffer_src);
			free(buffer_dest);
		}
	}
	return (0);
}
