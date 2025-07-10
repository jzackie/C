#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    while (argc > 1)
    {
        j = 0;
        while(argv[1][j])
            write(1, &argv[1][j++], 1);
        break;
    }
    write(1, "\n", 1);
}