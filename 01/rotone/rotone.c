#include <unistd.h>

void	rotone(char c)
{
	if (c == 'a' || c == 'A')
		c += 25;
	else if (c == 'z' || c == 'Z')
		c -= 25;
	else
		c += 1;
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			rotone(argv[1][i++]);
	}
	write(1, "\n", 1);
	return (0);
}