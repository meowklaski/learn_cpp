#include <iostream>
 
void printResult(double x)
{
    std::cout << x << std::endl;
}


double getInput()
{   
    double x;
    std::cout << "Please enter a number: " << std::endl;
    std::cin >> x;
    return x;
}

int getOperation()
{   
    int x;
    std::cout << "Please enter (1 +), (2 -), (3 *), (4 /): " << std::endl;
    std::cin >> x;
    return x;
}