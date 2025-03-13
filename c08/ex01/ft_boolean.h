#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

#define SUCCESS	0
#define TRUE 1
#define FALSE 0
#define EVEN(nbr) (nbr % 2 == 0)
#define EVEN_MSG "I have a pair number of arguments.\n"
#define ODD_MSG "I have an impair number of arguments.\n"

type int	t_bool;
t_bool	ft_is_even(int nbr);
void	ft_putstr(char *str);

#endif
