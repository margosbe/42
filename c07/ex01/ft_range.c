#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int		min;
		int		max;
		char	*range;

		min = atoi(argv[1]);
		max = atoi(argv[2]);
		printf("For min %d and max %d\nRange is:", min, max);
		range = ft_range(min, max);
		while (*range)
		{
			printf("%d ", range);
			range++;
		}
		free(range);
	}
}

int	*ft_range(int min, int max)
{
	int	diff;
	int	*range;

	if (min >= max)
		return (NULL);
	diff = max -1 - min;
	range = malloc(sizeof(int) * diff +1);
	while (min < max)
	{
		range = min;
		range++;
		min++;
	}
	return (range);
}
