#include <unistd.h>

void	ft_ultstr(char c)
{
	int	i;

	if (c >= 96 && c <= 122)
		c -= 32;
	else if (c >= 65 && c <= 90)
		c += 32;
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			ft_ultstr(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
}
