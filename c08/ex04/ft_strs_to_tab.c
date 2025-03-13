#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str);
char *ft_strdup(char *src);
struct s_stock_str      *ft_param_to_tab(int ac, char **av);

struct s_stock_str	*ft_param_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*stock;

	stock = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!stock)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		stk[i].size = ft_strlen(av[i]);
		stk[i].str = av[i];
		stk[i].copy = ft_strdup(av[i]);
		i++;
	}
	stk[i].str = 0;
	return (stk);
}

int     ft_strlen(char *str)
{
        int c = 0;
        while (str[c])
                c++;
        return (c);
}

char *ft_strdup(char *src)
{

}
