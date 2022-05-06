#include "get_next_line.h"

#include <fcntl.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
    (void)argc;
    int fd = open(argv[1], O_RDONLY);
    char    *line;

    printf("%d\n", BUFFER_SIZE);
    for (int i = 1; i <= 26; i++)
    {
        line = get_next_line(fd);
        printf("line %d = %s\n", i, line);
        free(line);
    }
}