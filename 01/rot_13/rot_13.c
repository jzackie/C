#include <unistd.h>

void	ft_rot_13(char c)
{
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		c += 13;
	else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
		c -= 13;
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
		while (argv[1][i])
			ft_rot_13(argv[1][i++]);
	write(1, "\n", 1);
}