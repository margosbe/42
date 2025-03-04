#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	h;

	h = 0;
	while (h <= n && s1[h] == s2[h])
	{
		h++;
	}
	if (h == n)
		return (0);
	return (s1[h] - s2[h]);
}

int	main(int argc, char *argv[])
{
	if(argc > 3)
	{
		int n = atoi(argv[3]);

		if (n >= 0)
		{
			printf("Original function output: %d\n", strncmp(argv[1], argv[2], (unsigned int) n));
                	printf("Remade function output: %d", ft_strncmp(argv[1], argv[2], (unsigned int) n));
		}
		else
		{
			printf("Pick positive integer, please.\n");
		}
	}
}
