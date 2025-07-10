#include <unistd.h>

int main(int argc, char **argv)
{
    int j;

    argc = --argc;
    while (argc)
    {
        j = 0;
        while (argv[argc][j])
            write(1, &argv[argc][j++], 1);
        break;
    }
    write(1, "\n", 1);
}