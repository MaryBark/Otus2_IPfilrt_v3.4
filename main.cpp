#include <iostream>
#include "ip_filtr_lib.h"

using namespace std;

int main(int argc, char const *argv[])
{
    try
    {
        run(std::cin, std::cout);
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
