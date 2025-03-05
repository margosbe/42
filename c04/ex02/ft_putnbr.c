#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
  write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb < 0)
    {
        nb = -nb;
        ft_putchar('-');
    }
    if (nb < 10)
    {
        ft_putchar(nb + '0');
    }
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}

int	main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int n = atoi(argv[1]);
        printf("input: \n%s\n", argv[1]);
        printf("output: \n");
        ft_putnbr(n);
    }
    return (0);
}