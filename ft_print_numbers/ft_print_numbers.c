#include <unistd.h>

void	ft_print_numbers(void)
{
	write(1, "1234567890", 10);
}

int	main()
{
	ft_print_numbers();
}