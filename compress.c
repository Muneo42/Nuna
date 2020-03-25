#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_counter(char	*str, char alpha)
{
	int	i;
	int	number;

	i = 0;
	number = 0;
	while (str[i])
	{
		if (str[i] == alpha)
			number++;
		i++;
	}
	return (number);
}

void	ft_analyse(char *str)
{
	int	i;
	char	alpha;

	alpha = 'A';
	while (alpha <= 'z')
	{
		i = 0;
		if (alpha == 'Z')
			alpha = 'a';
		while (str[i] != alpha && str[i] != '\0')
		{
			i++;
		}
		if (str[i] == alpha)
		{
			ft_putchar(alpha);
			ft_putchar(ft_counter(str, alpha) + '0');
		}
		alpha++;
	}
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	ft_analyse(av[1]);
	return (0);
}
