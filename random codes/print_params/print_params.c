#include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

int	main(int argc, char **argv)
{
	int	i = 1;
	while (i < argc)
	{
		int j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
