#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    while (argc > i)
    {
        j = 0;
        while (argv[i][j])
        {
            if (argv[i][j] == 'z')
            {
                write(1, "z", 1);
                break;
            }
            j++;
        }
        i++;
    }
    write(1, "\n", 1);
    return (0);
}