#include <unistd.h>
#include "Option.hpp"

int determine_option(int argc, char** argv)
{
    int opt;
    while((opt = getopt(argc, argv, "w:"))!=-1)
    {
        return opt;
    }
    return 0;
}
