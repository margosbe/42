#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	h;

	h = 0;
	while (s1[h] && s1[h] == s2[h])
	{
		h++;
	}
	return (s1[h] - s2[h]);
}

int	main(int argc, char *argv[])
{
	if (argc > 2)
	{
		printf("original function result: %d\n", strcmp(argv[1], argv[2]));
		printf("remade function result: %d", ft_strcmp(argv[1], argv[2]));
	}
}
