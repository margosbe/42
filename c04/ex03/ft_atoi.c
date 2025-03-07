#include <stdio.h>

int	ft_atoi(char *str)
{
	int	h;
	int	s;
	int	n;

	h = 0;
	s = 1;
	n = 0;
	while (str[h] == 32 || (str[h] > 9 && str[h] < 13))
		h++;
	while (str[h] == '+' || str[h] == '-')
	{
		if (str[h] == '-')
			s *= -1;
		h++;
	}
	while (str[h] >= '0' && str[h] <= '9')
	{
		n = (n * 10) + (str[h++] - '0');
	}
	return (n * s);
}

int	main(int argc, char *argv[])
{
	if (argc != 0 && *argv)
		printf("Output of function atoi: %d", ft_atoi(" ---+--+1234ab567"));
}
