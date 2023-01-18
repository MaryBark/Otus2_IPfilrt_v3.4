#ifndef AUXILIARY_H
#define AUXILIARY_H

#pragma once

#include <vector>
#include <functional>
#include <string.h>
#include <iostream.h>


using func_str = std::function<void(std::string)>;

std::vector<std::string> split(const std::string& str, char d);

void read_lines(std::istream& stream, func_str fn_line_handler);


#endif // AUXILIARY_H
