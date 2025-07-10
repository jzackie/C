#include <unistd.h>

void    ft_alphabet(void)
{
    char    a;
    char    out;

    a = 'a';
    while ((a >= 97 && a <= 122) || (a >= 65 && a <= 90))
    {
        if (a % 2 == 0)
            out = a - 32;
        else
            out = a;

        write(1, &out, 1);
        a++;
    }
    write(1, "\n", 1);
}

int main(void)
{
    ft_alphabet();
}