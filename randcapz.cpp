#include "randcapz.h"

#include <random>
#include <functional>
#include <cctype>

std::string &randcapz(std::string &str)
{
    std::random_device rd;
    std::mt19937 engine(rd());
    std::uniform_int_distribution<> distribution(0, 99);

    for (char &c : str)
    {
        c = distribution(engine) < 50 ? std::toupper(c) : std::tolower(c);
    }

    return str;
}
