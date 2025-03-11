#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int	min;
		int	max;

		min = atoi(argv[2]);
		max = atoi(argv[3]);
		printf("For the given range with min %d and max %d, the ultimate range is: %d",
			min, max, ft_ultimate_range(argv[1], min, max));
	}
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	h;
	int	diff;
	int	*temp;

	if(min >= max)
		return (-1);
	diff = max - min;
	temp = (int *) malloc(sizeof(int) * diff);
	if (!temp)
		return (-1);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	range = temp;
	return (i);
}
