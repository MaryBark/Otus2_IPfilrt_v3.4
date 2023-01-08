#include "auxiliary.h"

#include <vector>
#include <iterator>
#include <iostream>
#include <functional>
#include <string>


std::vector<std::string> split(const std::string& str, char d)
{
    std::vector<std::string> r;

    std::string::size_type start = 0;
    std::string::size_type stop = str.find_first_of(d);
    while (stop != std::string::npos)
    {
        r.push_back(str.substr(start, stop - start));

        start = stop + 1;
        stop = str.find_first_of(d, start);
    }

    r.push_back(str.substr(start));

    return r;
}

void read_lines(std::istream& stream, func_str fn_line_handler) 
{
    for (std::string line; std::getline(stream, line);)
        fn_line_handler(line);
}
