#include <stdlib.h>

int	*ft_strjoin(int size, char **strs, char *sep);
int	ft_ultimate_strlen(char **strs);
int	ft_strlen(char *str);
char	*ft_strcat(char *s1, char *s2);

int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int	s;
		char	*strjoined;

		s = atoi(argv[1]);
		strjoined = ft_strjoin(s, argv[2], argv[3]);
		printf("The strs joined result in: %s", strjoined);
		free(strjoined);
	}
}

int     *ft_strjoin(int size, char **strs, char *sep)
{
	int	h;
	char	*str;
	int	l;

	l = ft_ultimate_strlen(**strs);
	l += (size -1) * ft_len(sep);
	str = (char *) malloc(sizeof(char) * l +1);
	if (!str)
		return (NULL);
	h = 0;
	while (h < size)
	{
		ft_strcat(*str, strs[i]);
		if (i +1 < size)
			ft_strcat(str, sep);
		h++;
	}
	return (str);
}
