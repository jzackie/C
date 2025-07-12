#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;
	int	len;

	if (argc == 2)
	{
		len = 0;
		while (argv[1][len])
			len++;
		i = len - 1;
		while (i >= 0)
		{
			write(1, &argv[1][i], 1);
			i--;
		}
	}
	write (1, "\n", 1);
	return (0);
}
