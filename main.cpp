#include <iostream>

#include "randcapz.h"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "Usage: " << argv[0] << " [string]" << std::endl;
        exit(-1);
    }

    std::string str = argv[1];
    std::cout << randcapz(str) << std::endl;

    return 0;
}
