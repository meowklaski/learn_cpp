#include <iostream>
#include <math.h>
#include <stdint.h>
int main()
    {
        double y{32000};
        std::cout << (int_fast32_t) y << " " << std::endl;
        
        return 0;
    }