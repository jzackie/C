#include <unistd.h>

void	ft_repeat_alpha(char c)
{
	int	count;
	int	i;

	if (c >= 97 && c <= 122)
		count = (c - 'a') + 1;
	else if (c >= 65 && c <= 90)
		count = (c - 'A') + 1;
	else
	{
		write(1, &c, 1);
		return ;
	}

	i = 0;
	while (i < count)
	{
		write(1, &c, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	j;

	j = 0;
	if (argc == 2)
	{
		while (argv[1][j])
		{
			ft_repeat_alpha(argv[1][j]);
			j++;
		}
	}
	write(1, "\n", 1);
}
