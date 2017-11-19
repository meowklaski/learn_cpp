// <> -> header is included with compiler, look in system dirs
#include <iostream>  // Preprocessing directive

// "" -> header is supplied by user; look in cwd and any specified path
#include "square.h"

int main()
{
    std::cout << sqr(3) << std::endl;

    return 0;

}