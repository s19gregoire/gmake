#include "lib/default.h"

int main(int argc, char **argv)
{
    int i = 0;
    char buffer[1000000];
    int co;
    while (i < argc)
    {
        FILE* filedata = fopen(argv[i], "r");
        int co = fread(&buffer, sizeof(char), 1000000, filedata);
        parsert(buffer);
        co = 0;
        i++;
    }
    return 0;
}