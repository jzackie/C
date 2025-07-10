#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i, j;

	i = 1;
	j = 0;
	if (argc != 2)
		write(1, "a", 1);
	else
	{
		while (argv[i][j])
		{
			if (argv[i][j] == 'a')
				write(1, "a", 1);
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
