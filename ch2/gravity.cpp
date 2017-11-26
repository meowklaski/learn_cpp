#include <iostream>
#include "constants.h"

double getHeight()
{
    std::cout << "Enter in your height value (m): \n";
    
    double h;
    std::cin >> h;

    return h;
}

double calculateHeight(double time, double init_height)
{
    return init_height - 0.5 * myConstants::gravity * time * time;
}

void printHeight(double time, double init_height)
{
    const double height = calculateHeight(time, init_height);
    if (height > 0)
        std::cout << "After " << time << " seconds, the ball is at " << height << " meters\n";
    else 
        std::cout << "The ball is on the ground\n";
}   

int main()
{
    const double height = getHeight();
    printHeight(0, height);
    printHeight(1, height);
    printHeight(2, height);
    printHeight(3, height);
    printHeight(4, height);
    printHeight(5, height);
    
    return 0;
}



